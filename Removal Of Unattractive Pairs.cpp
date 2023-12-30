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
        string s;
        cin >> s;
        unordered_map<int,int>m;
        for(auto it:s)
            m[it]++;
        int mx=0;
        for(auto it:m)
            mx=max(mx,it.second);
        if(mx>(n/2))
        {
            int x=n-mx;
            cout << n-(2*x) << endl;
        }
        else
            n&1 ? cout << 1 << endl : cout << 0 << endl;
    }
    return 0;
}
