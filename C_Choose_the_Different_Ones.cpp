#include "bits/stdc++.h"
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define int long long
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define uint unsigned long long
#define vi vector<int>
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define vvi vector<vi>
#define vb vector<bool>
#define vvb vector<vb>
#define fr(i, n) for (int i = 0; i < (n); i++)
#define rep(i, a, n) for (int i = (a); i <= (n); i++)
#define nl cout << "\n"
#define dbg(var) cout << #var << "=" << var << " "
#define all(v) v.begin(), v.end()
#define srt(v) sort(v.begin(), v.end())         // sort
#define mxe(v) *max_element(v.begin(), v.end()) // find max element in vector
#define mne(v) *min_element(v.begin(), v.end()) // find min element in vector
#define unq(v) v.resize(distance(v.begin(), unique(v.begin(), v.end())));
// make sure to sort before applying unique // else only consecutive duplicates would be removed
#define bin(x, y) bitset<y>(x)
using namespace std;
int MOD = 1e9 + 7; // Hardcoded, directly change from here for functions!

void modadd(int &a, int b) { a = ((a % MOD) + (b % MOD)) % MOD; }
void modsub(int &a, int b) { a = ((a % MOD) - (b % MOD) + MOD) % MOD; }
void modmul(int &a, int b) { a = ((a % MOD) * (b % MOD)) % MOD; }
// ================================== take ip/op like vector,pairs directly!==================================
template <typename typC, typename typD>
istream &operator>>(istream &cin, pair<typC, typD> &a) { return cin >> a.first >> a.second; }
template <typename typC>
istream &operator>>(istream &cin, vector<typC> &a)
{
    for (auto &x : a)
        cin >> x;
    return cin;
}
template <typename typC, typename typD>
ostream &operator<<(ostream &cout, const pair<typC, typD> &a) { return cout << a.first << ' ' << a.second; }
template <typename typC, typename typD>
ostream &operator<<(ostream &cout, const vector<pair<typC, typD>> &a)
{
    for (auto &x : a)
        cout << x << '\n';
    return cout;
}
template <typename typC>
ostream &operator<<(ostream &cout, const vector<typC> &a)
{
    int n = a.size();
    if (!n)
        return cout;
    cout << a[0];
    for (int i = 1; i < n; i++)
        cout << ' ' << a[i];
    return cout;
}
// ===================================END Of the input module ==========================================

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    vi a(n), b(m), temp;
    cin >> a >> b;
    temp = a;
    temp.insert(temp.end(), b.begin(), b.end());
    srt(temp);
    unq(temp);
    bool ans = true;
    fr(i, k)
    {
        if (temp[i] != i + 1)
        {
            ans = false;
            break;
        }
    }
    if (ans)
    {
        srt(a);
        srt(b);
        unq(a);
        unq(b);
        unordered_map<int, int> m1, m2;
        for (auto it : a)
            m1[it]++;
        for (auto it : b)
            m2[it]++;
        vb w(k, false);
        int c1 = 0, c2 = 0;
        fr(i, k)
        {
            if (((m1[i + 1] == 1) && (m2[i + 1] == 0)))
            {
                w[i] = true;
                m1[i + 1]--;
                c1++;
            }
            if ((m1[i + 1] == 0) && (m2[i + 1] == 1))
            {
                w[i] = true;
                m2[i + 1]--;
                c2++;
            }
            if ((c1 > k/2) || (c2 > k/2))
            {
                ans = false;
                break;
            }
        }
        fr(i, k)
        {
            if (!w[i])
            {
                if (c1 > c2)
                {
                    if (m2[i + 1] >= 1)
                    {
                        m2[i + 1]--;
                        c2++;
                        w[i]=true;
                    }
                    else if (m1[i + 1] >= 1)
                    {
                        m1[i + 1]--;
                        c1++;
                        w[i]=true;
                    }
                }
                else
                {
                    if (m1[i + 1] >= 1)
                    {
                        m1[i + 1]--;
                        w[i]=true;
                        c1++;
                    }
                    else if (m2[i + 1] >= 1)
                    {
                        m2[i + 1]--;
                        w[i]=true;
                        c2++;
                    }
                }
            }
            if (c1 > k/2 || c2 > k/2)
            {
                ans = false;
                break;
            }
        }
        if (ans)
        {
            for (auto it : w)
            {
                if (!it)
                {
                    ans = false;
                    break;
                }
            }
            ans ? yes : no;
        }
        else
            no;
    }
    else
        no;
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T = 1;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}
