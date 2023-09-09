#include <iostream>
#include <bits/stdc++.h>
#define flush                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define ll long long
#define ld long double
#define fl float
#define nl '\n'
#define fori(a, b) for (int i = a; i < b; i++)
#define forj(a, b) for (int j = a; j < b; j++)
#define foril(a, b) for (ll i = a; i < b; i++)
#define forir(a, b) for (int i = a; i >= b; i--)
#define pb push_back
#define sort(v) sort(v.begin(), v.end())
#define cy cout << "Yes" << nl
#define cn cout << "No" << nl
#define ump(a, b) unordered_map<a, b> ump
#define mp(a, b) unordered_map<a, b> mp
#define vec(a) vector<a> vec
#define vec(a, n) vector<a> vec(n)
const int mod = 1e9 + 7;
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> vpr;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        vpr.push_back({x, y});
    }
    int res = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        int val;
        if (vpr[i].second % 2 == 0)
        {
            val = (vpr[i].second - 2) / 2;
            res = min(res, val + vpr[i].first);
        }
        else
        {
            val = vpr[i].second / 2;
            res = min(res, val + vpr[i].first);
        }
    }
    cout << res << endl;
}

int main()
{

    flush;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}