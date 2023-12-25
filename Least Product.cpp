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
        int c=0,c1=0;
        vector<int>v(n);
        for(int i=0;i<n;i++)
            cin >> v[i],c+=(v[i]==0),c1+=(v[i]<0);
        if(c || c1&1)
            cout << 0 << endl;
        else
            cout << 1 << endl << 1 << " " << 0 << endl;
    }
    return 0;
}
