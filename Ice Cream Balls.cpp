#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll helper(int n)
{
    return (1LL*n*(n-1))/2;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        int l=0,r=2e9;
        ll ans=l;
        while(l<=r)
        {
            int m=l+(r-l)/2;
            if(helper(m)<=n)
            {
                ans=m;
                l=m+1;
            }
            else
                r=m-1;
        }
        ans+=n-helper(ans);
        cout << ans << endl;
    }
    return 0;
}
