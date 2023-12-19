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
        int n=s.size();
        int i=1;
        while(i<n && s[i]=='0')
        {
            i++;
        }
        if(i>n/2)
            cout << -1 << endl;
        else
        {
            int a=stoi(s.substr(0,i));
            int b=stoi(s.substr(i,n-i));
            if(a<b)
                cout << a << " " << b << endl;
            else
                cout << -1 << endl;
        }
    }
    return 0;
}
