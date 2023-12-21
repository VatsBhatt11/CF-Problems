#include<bits/stdc++.h>
#define ll long long
using namespace std;

vector<int> getMax3(vector<int>a)
{
    int mx1=-1,mx2=-1,mx3=-1,n=a.size();
    for(int i=0;i<n;i++)
    {
        if(mx1==-1 || a[i]>a[mx1])
        {
            mx3=mx2;
            mx2=mx1;
            mx1=i;
        }
        else if(mx2==-1 || a[i]>a[mx2])
        {
            mx3=mx2;
            mx2=i;
        }
        else if(mx3==-1 || a[i]>a[mx3])
            mx3=i;
    }
    return {mx1,mx2,mx3};
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        vector<int>a(n),b(n),c(n);
        for(int i=0;i<n;i++)
            cin >> a[i];
        for(int i=0;i<n;i++)
            cin >> b[i];
        for(int i=0;i<n;i++)
            cin >> c[i];
        int ans=0;
        for(auto x:getMax3(a))
        {
            for(auto y:getMax3(b))
            {
                for(auto z:getMax3(c))
                {
                    if(x!=y && y!=z && x!=z)
                        ans=max(ans,a[x]+b[y]+c[z]);
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
