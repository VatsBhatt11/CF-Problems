#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n,k;
        cin >> n >> k;
        vector<int>a(n),b(n);
        for(int i=0;i<n;i++)
            cin >> a[i];
        for(int i=0;i<n;i++)
            cin >> b[i];
        vector<ll>prefix(n);
        vector<int>mx(n);
        prefix[0]=a[0];
        mx[0]=b[0];
        for(int i=1;i<n;i++)
        {
            prefix[i]=prefix[i-1]+a[i];
            mx[i]=max(mx[i-1],b[i]);
        }
        ll ans;
        if(k<=n)
        {
            ans=prefix[k-1];
            ll temp;
            for(int i=k-1;i>0;i--)
            {
                temp=prefix[i];
                temp-=a[i];
                temp+=(k-i)*(mx[i-1]);
                ans=max(ans,temp);
            }
        }
        else
        {
            ans=prefix[n-1]+((k-n)*mx[n-1]);
            ll temp;
            for(int i=n-1;i>0;i--)
            {
                temp=prefix[i];
                temp-=a[i];
                temp+=(k-i)*(mx[i-1]);
                ans=max(ans,temp);
            }
        }
        cout << ans << endl;
    }
    return 0;
}
