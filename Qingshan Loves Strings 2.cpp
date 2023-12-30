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
        if(n&1)
        {
            cout << -1 << endl;
            continue;
        }
        int i=0,cnt=0;
        vector<int>ans;
        while(i<n/2 && cnt<=300)
        {
            if(s[i]==s[n-i-1])
            {
                if(s[i]-'0')
                {
                    string t1=s.substr(0,i);
                    string t2=s.substr(i,n-i);
                    ans.push_back(i);
                    t1+="01";
                    s=t1+t2;
                }
                else
                {
                    string t1=s.substr(0,n-i);
                    string t2=s.substr(n-i,i);
                    ans.push_back(n-i);
                    t1+="01";
                    s=t1+t2;
                }
                n+=2;
                i=0;
                cnt++;
            }
            i++;
        }
        bool flag=true;
        for(int i=0;i<n/2;i++)
        {
            if(s[i]==s[n-i-1])
            {
                flag=false;
                break;
            }
        }
        if(flag)
        {
            cout << cnt << endl;
            for(auto it:ans)
                cout << it << " ";
            cout << endl;
        }
        else
            cout << -1 << endl;
    }
    return 0;
}
