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
        int x1,y1,x2,y2,a,b;
        cin >> a >> b >> x1 >> y1 >> x2 >> y2;
        set<pair<int,int>>s1;
        s1.insert({x1-a,y1-b});
        s1.insert({x1-a,y1+b});
        s1.insert({x1+a,y1-b});
        s1.insert({x1+a,y1+b});
        s1.insert({x1-b,y1-a});
        s1.insert({x1-b,y1+a});
        s1.insert({x1+b,y1-a});
        s1.insert({x1+b,y1+a});
        set<pair<int,int>>s2;
        if(s1.find({x2-a,y2-b})!=s1.end())
            s2.insert({x2-a,y2-b});
        if(s1.find({x2-a,y2+b})!=s1.end())
            s2.insert({x2-a,y2+b});
        if(s1.find({x2+a,y2-b})!=s1.end())
            s2.insert({x2+a,y2-b});
        if(s1.find({x2+a,y2+b})!=s1.end())
            s2.insert({x2+a,y2+b});
        if(s1.find({x2-b,y2-a})!=s1.end())
            s2.insert({x2-b,y2-a});
        if(s1.find({x2+b,y2-a})!=s1.end())
            s2.insert({x2+b,y2-a});
        if(s1.find({x2-b,y2+a})!=s1.end())
            s2.insert({x2-b,y2+a});
        if(s1.find({x2+b,y2+a})!=s1.end())
            s2.insert({x2+b,y2+a});
        cout << s2.size() << endl;
    }
    return 0;
}
