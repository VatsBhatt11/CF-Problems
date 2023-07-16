#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int>v(n),a(n);
        for(int i=0;i<n;i++)
            cin >> v[i];
        a[0]=v[0];
        int f=1;
        for(int i=1;i<n;i++)
        {
            if(a[i-1]-v[i]>=0 && v[i]!=0)
            {
                f=0;
                break;
            }
            a[i]=v[i]+a[i-1];
        }
        if(f)
        {
            for(auto it:a)
            cout << it << " ";
            cout << endl;
        }
        else
        cout << -1 << endl;
    }
    return 0;
}
