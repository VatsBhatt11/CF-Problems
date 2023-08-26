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
        int n,m;
        cin >> n >> m;
        vector<string>v(n);
        for(int i=0;i<n;i++)
            cin >> v[i];
        int cnt=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(v[j][i]=='v' && cnt==0)
                {
                    cnt++;
                    break;
                }
                else if(v[j][i]=='i' && cnt==1)
                {
                    cnt++;
                    break;
                }
                else if(v[j][i]=='k' && cnt==2)
                {
                    cnt++;
                    break;
                }
                else if(v[j][i]=='a' && cnt==3)
                {
                    cnt++;
                    break;
                }
            }
        }
        if(cnt==4)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
