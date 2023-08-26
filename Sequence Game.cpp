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
        int m;
        cin >> m;
        vector<int>v(m);
        for(int i=0;i<m;i++)
            cin >> v[i];
        vector<int>ans;
        ans.push_back(v[0]);
        for(int i=1;i<m;i++)
        {
            ans.push_back(v[i]);
            if(v[i-1]>v[i])
                ans.push_back(v[i]);
        }
        cout << ans.size() << endl;
        for(auto it:ans)
            cout << it << " ";
        cout << endl;
    }
    return 0;
}
