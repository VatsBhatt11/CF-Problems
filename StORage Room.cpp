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
        vector<vector<int>>v(n,vector<int>(n));
        vector<int>ans(n,(1<<30)-1);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin >> v[i][j];
                if(i!=j)
                {
                    ans[i]&=v[i][j];
                    ans[j]&=v[i][j];
                }
            }
        }
        bool flag=true;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i!=j && (ans[i]|ans[j])!=v[i][j])
                {
                    flag=false;
                    break;
                }
            }
        }
        if(flag)
        {
            cout << "YES\n";
            for(auto it:ans)
                cout << it << " ";
            cout << endl;
        }
        else
            cout << "NO\n";
    }
    return 0;
}
