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
        string s1,s2;
        cin >> s1 >> s2;
        bool flag=false;
        int n=s1.size();
        for(int i=0;i<n-1;i++)
        {
            if(s1[i]==s2[i] && s1[i]=='0')
            {
                if(s1[i+1]==s2[i+1] && s1[i+1]=='1')
                {
                    flag=true;
                    break;
                }
            }
        }
        flag ? cout << "YES\n" : cout << "NO\n" ;
    }
    return 0;
}
