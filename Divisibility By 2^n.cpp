#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<ll>v(n);
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            cin >> v[i];
            while(v[i]%2==0)
            {
                cnt++;
                v[i]>>=1;
            }
        }
        if(cnt>=n)
        {
            cout << 0 << endl;
            continue;
        }
        vector<int>c(n+1);
        for(int i=1;i<=n;i++)
        {
            int j=i;
            while(j%2==0)
            {
                c[i]++;
                j>>=1;
            }
        }
        int ans=0;
        sort(c.rbegin(),c.rend());
        for(auto it:c)
        {
            if(cnt+it>=n)
            {
                ans++;
                cnt=n;
                break;
            }
            cnt+=it;
            ans++;
        }
        if(cnt < n)
            cout << -1 << endl;
        else
            cout << ans << endl;
    }
    return 0;
}
