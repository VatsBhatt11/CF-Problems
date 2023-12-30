#include<bits/stdc++.h>
#define ll long long
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
template<class T> using oset = tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update>;

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
        vector<vector<int>>v(n,vector<int>(2));
        for(int i=0;i<n;i++)
            cin >> v[i][0] >> v[i][1];
        sort(v.begin(),v.end());
        ll ans=0;
        oset<int>st;
        for(auto it:v)
            st.insert(it[1]);
        for(auto it:v)
        {
            ans+=st.order_of_key(it[1]);
            st.erase(it[1]);
        }

        cout << ans << endl;
    }
    return 0;
}
