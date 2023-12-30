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
        if(v[0]!=m)
            cout << "NO\n";
        else
        {
            vector<int>a(m+1);
            for(auto it:v)
                a[it]++;
            vector<int>b(m);
            b[m-1]=a[m];
            for(int i=m-2;i>=0;i--)
                b[i]=b[i+1]+a[i+1];
            bool flag=true;
            for(int i=0;i<m;i++)
            {
                if(b[i]!=v[i])
                {
                    flag=false;
                    break;
                }
            }
            if(flag)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
    return 0;
}
