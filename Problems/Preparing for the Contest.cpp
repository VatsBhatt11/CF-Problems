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
        int n,k;
        cin >> n >> k;
        int i=n-k;
        while(i<=n)
        {
            cout << i << " ";
            i++;
        }
        i=n-k-1;
        while(i>=1)
        {
            cout << i << " ";
            i--;
        }
        cout << endl;
    }
    return 0;
}
