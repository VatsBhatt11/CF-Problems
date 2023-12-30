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
        vector<ll>v(n);
        for(int i=0;i<n;i++)
            cin >> v[i];
        if(k>=3)
        {
            cout << 0 << endl;
            continue;
        }
        sort(v.begin(),v.end());
        ll ans=v[0];
        for(int i=1;i<n;i++)
            ans=min(ans,v[i]-v[i-1]);
        if(k==2)
        {
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<i;j++)
                {
                    ll x=v[i]-v[j];
                    int p=lower_bound(v.begin(),v.end(),x) - v.begin();
                    if(p<n)
                        ans=min(ans,v[p]-x);
                    if(p>0)
                        ans=min(ans,x-v[p-1]);
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
