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
        int n,q;
        cin >> n >> q;
        vector<ll> a(n),x(q);
        for(int i=0;i<n;i++)
            cin >> a[i];
        for(int i=0;i<q;i++)
            cin >> x[i];
        map<int,bool>m;
        for(int j=0;j<q;j++)
        {
            if(m[x[j]])
                continue;
            for(int i=0;i<n;i++)
            {
                if(a[i]%(1 << x[j]) == 0)
                    a[i] += (1 << (x[j]-1));
            }
            m[x[j]] = true;
        }
        for(auto it:a)
            cout << it << " ";
        cout << endl;
    }
    return 0;
}
