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
        map<int,int>m;
        for(auto it:s)
            m[it-'A']++;
        int ans=0;
        for(auto it:m)
        {
            //cout << it.first << " " << it.second << endl;
            if(it.first <= it.second-1)
                ans++;
        }
        cout << ans << endl;
    }
    return 0;
}
