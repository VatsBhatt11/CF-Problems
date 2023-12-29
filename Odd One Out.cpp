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
        int n,m,b;
        cin >> n >> m >> b;
        int ans=n^b^m;
        cout << ans << endl;
    }
    return 0;
}
