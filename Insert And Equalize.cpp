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
        int n;
        cin >> n;
        vector<ll>v(n);
        ll gcd=0;
        for(int i=0;i<n;i++)
            cin >> v[i];
        if(n==1)
        {
            cout << 1 << endl;
            continue;
        }
        sort(v.begin(),v.end());
        for(int i=0;i<n-1;i++)
            gcd=__gcd(gcd,v[i+1]-v[i]);
        ll mx=v[n-1];
        ll x=INT_MAX;
        for(int i=n-1;i>0;i--)
        {
            if(v[i]-v[i-1]>gcd)
            {
                x=v[i]-gcd;
                break;
            }
        }
        if(x==INT_MAX)
        {
            x=v[n-1]+gcd;
            mx=x;
        }
        ll ans=(mx-x)/gcd;
        for(auto it:v)
            ans+=(mx-it)/gcd;
        cout << ans << endl;
    }
    return 0;
}
