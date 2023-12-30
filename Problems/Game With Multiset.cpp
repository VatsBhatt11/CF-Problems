#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    map<ll,int>cnt;
    int tc;
    cin >> tc;
    while(tc--)
    {
        int a,b;
        cin >> a >> b;
        if(a==1)
            cnt[1<<b]++;
        else
        {
            for(int i=30;i>=0;i--)
            {
                if(b>=(1<<i))
                    b-=min((b/(1<<i)),cnt[1<<i])*(1<<i);
            }
            b ? cout << "NO\n" : cout << "YES\n";
        }
    }
    return 0;
}
