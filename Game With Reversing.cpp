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
        string s1,s2;
        cin >> s1 >> s2;
        if(s1==s2)
        {
            cout << 0 << endl;
            continue;
        }
        int cnt1=0,cnt2=0,ans=INT_MAX;
        for(int i=0;i<n;i++)
        {
            cnt1+=!(s1[i]==s2[i]);
            cnt2+=!(s1[i]==s2[n-i-1]);
        }
        if(cnt1&1)
            ans=min(ans,2*cnt1-1);
        else
            ans=min(ans,2*cnt1);
        if(cnt2==0)
        {
            cout << min(ans,2) << endl;
            continue;
        }
        if(cnt2&1)
            ans=min(ans,2*cnt2);
        else
            ans=min(ans,2*cnt2-1);
        cout << ans << endl;
    }
    return 0;
}
