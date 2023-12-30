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
        vector<int>v(n);
        ll sum=0;
        for(int i=0;i<n;i++)
            cin >> v[i],sum+=v[i];
        ll x=sqrt(sum);
        x*x==sum ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}
