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
        int n;
        cin >> n;
        string s;
        cin >> s;
        string ans=s,temp="";
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]=='a' || s[i]=='e')
                temp+="V";
            else
                temp+="C";
            if(temp=="VC" || temp=="CVC")
            {
                ans.insert(i,".");
                temp="";
            }
        }
        ans.erase(0,1);
        cout << ans << endl;
    }
    return 0;
}
