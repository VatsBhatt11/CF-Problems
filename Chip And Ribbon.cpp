#include<bits/stdc++.h>
#define ll long long int
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
        vector<int> c(n);
        for(int i=0;i<n;i++)
            cin >> c[i];
        ll ans=c[0]-1;
        for(int i=1;i<n;i++)
            ans+=max(0,c[i]-c[i-1]);
        cout << ans << endl;
    }
    return 0;
}
