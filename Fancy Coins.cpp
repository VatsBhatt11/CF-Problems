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
        ll m,k,x,y;
        ll ans;
        cin >> m >> k >> x >> y;
        ll temp=m-min(k*y,(m/k)*k);
        m=max(0ll,temp-x);
        ans=(m/k)+(m%k);
        if(x>=(k-(m%k)))
            ans=min(ans,(m/k)+1);
        cout << ans << endl;
    }
    return 0;
}
