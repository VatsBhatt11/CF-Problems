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
        string s;
        cin >> s;
        int n=s.size();
        string s1="",s2=s1;
        for(int i=0;i<2*n;i++)
        {
            if(i<n)
                s1+="(";
            else
                s1+=")";
            if(i&1)
                s2+=")";
            else
                s2+="(";
        }
        if(s1.find(s)==string::npos)
            cout << "YES\n" << s1 << endl;
        else if(s2.find(s)==string::npos)
            cout << "YES\n" << s2 << endl;
        else
            cout << "NO\n";
    }
    return 0;
}
