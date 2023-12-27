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
        k--;
        int m=n/2;
        cout << (k + (n%2)*(k/m))%n + 1 << endl;
    }
    return 0;
}
