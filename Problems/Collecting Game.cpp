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
        map<ll,int>m;
        vector<ll>v(n),w(n),prefix(n);
        vector<int>ans(n),cnt(n);
        for(int i=0;i<n;i++)
        {
            cin >> v[i];
            w[i]=v[i];
            ans[i]=i;
            //m[v[i]] = i;

        }
        sort(v.begin(),v.end());
        prefix[0]=v[0];
        for(int i=1;i<n;i++)
            prefix[i]=prefix[i-1]+v[i];
        for(int i=n-2;i>=0;i--)
        {
            if(prefix[i]>=v[i+1])
            {
                cnt[i]=1+cnt[i+1];
                ans[i]+=cnt[i];
            }
        }
        for(int i=0;i<n;i++)
            m[v[i]] = ans[i];
        for(auto it:w)
            cout << m[it] << " ";
        cout << endl;
    }
    return 0;
}