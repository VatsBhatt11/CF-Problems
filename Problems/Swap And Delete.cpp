#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int tc;
    cin >> tc;
    while(tc--)
    {
        string s;
        cin >> s;
        int n0=0,n1=0;
        for(auto it:s)
        {
            n0+=(it=='0');
            n1+=it-'0';
        }
        int i;
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='0')
            {
                if(n1)
                    n1--;
                else
                    break;
            }
            else
            {
                if(n0)
                    n0--;
                else
                    break;
            }
        }
        cout << s.size()-i << endl;
    }
    return 0;
}
