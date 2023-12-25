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
        for(int i=0;i<n;i++)
        {
            if(!m.count(s[i]))
                m[s[i]]=i;
        }
        ll ans=0;
        for(auto it:m)
            ans+=n-it.second;
        cout << ans << endl;
    }
    return 0;
}
