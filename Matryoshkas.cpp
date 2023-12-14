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
        vector<int>v(n);
        set<int>s;
        map<int,int>m;
        for(int i=0;i<n;i++)
        {
            cin >> v[i];
            m[v[i]]++;
            s.insert(v[i]);
            s.insert(v[i]+1);
        }
        int ans=0,last=0;
        for(auto it:s)
        {
            int cnt=m[it];
            ans+=max(0,cnt-last);
            last=cnt;
        }
        cout << ans << endl;
    }
    return 0;
}
