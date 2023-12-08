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
        int n1=0;
        for(auto it:s)
            n1+=(it-'0');
        vector<ll>setBit(n-n1),ans(n-n1);
        int j=0;
        for(int i=n-1;i>=0;i--)
        {
            if((s[i]-'0') == 0)
                setBit[j++]=n-i-1;
        }
        int k=0;
        if(n-n1)
        {
            int x=n-n1;
            while(x--)
            {
                if(k)
                {
                    ans[k] = ans[k-1] + setBit[k] - k;
                }
                else
                    ans[k] = setBit[k];
                k++;
            }
        }
        for(auto it:ans)
            cout << it << " ";
        while(n1--)
            cout << -1 << " ";
        cout << endl;
    }
    return 0;
}
