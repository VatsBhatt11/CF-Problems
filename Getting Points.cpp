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
        ll n,p,l,t;
        cin >> n >> p >> l >> t;
        ll w=(n/7)+(n%7!=0);
        ll x=ceil((p*1.0)/(l+t+t));
        x=min(x,w/2);
        ll ans=x;
        p-=x*(l+t+t);
        if(p<=0)
            cout << n-ans << endl;
        else
        {
            w-=2*x;
            if(w>0)
            {
                ll y=ceil((p*1.0)/(l+t));
                y=min(y,w);
                p-=y*(l+t);
                if(p<=0)
                    cout << n-ans-y << endl;
                else
                {
                    ll z=ceil((p*1.0)/l);
                    cout << n-ans-y-z << endl;
                }
            }
            else
            {
                ll z=ceil((p*1.0)/l);
                cout << n-ans-z << endl;
            }
        }
    }
    return 0;
}
