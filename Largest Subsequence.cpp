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
        char prev='a';
        vector<int>v;
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]>=prev)
            {
                v.push_back(i);
                prev=s[i];
            }
        }
        int m=v.size();
        for(int i=0;i<m/2;i++)
            swap(s[v[i]],s[v[m-i-1]]);
        int cnt=0;
        for(auto it:v)
            cnt+=s[it]==prev;
        bool flag=true;
        for(int i=0;i<n-1;i++)
        {
            if(s[i]>s[i+1])
            {
                flag=false;
                break;
            }
        }
        if(flag)
            cout << v.size()-cnt << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}
