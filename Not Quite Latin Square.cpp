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
        vector<vector<char>>v(3,vector<char>(3));
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
                cin >> v[i][j];
        }
        bool flag=false;
        for(int i=0;i<3;i++)
        {
            int a=0,b=0,c=0;
            for(int j=0;j<3;j++){
                if(v[i][j]=='A')
                    a++;
                else if(v[i][j]=='B')
                    b++;
                else if(v[i][j]=='C')
                    c++;
                else
                    flag=true;
            }
            if(flag)
            {
                if(a==0)
                    cout << "A\n";
                else if(b==0)
                    cout << "B\n";
                else
                    cout << "C\n";
                break;
            }
        }
    }
    return 0;
}
