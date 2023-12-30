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
        string s;
        cin >> s;
        bool flag=false;
        for(auto it:s)
        {
            if(it=='0')
            {
                flag=true;
                break;
            }
        }
        flag ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}
