#include <iostream>
#include <bits/stdc++.h>
#define flush                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define ll long long
#define ull unsigned long long
#define ld long double
#define fl float
#define nl '\n'
#define forr(i, a, b)           \
    for (int i = a; i < b; i++) \
        ;
#define forl(i, a, b)          \
    for (ll i = a; i < b; i++) \
        ;
#define rfor(i, a, b)            \
    for (int i = a; i >= b; i--) \
        ;
#define cy cout << "Yes" << nl
#define cn cout << "No" << nl
const int mod = 1e9 + 7;
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> vec(n);

    for (auto &i : vec)
    {
        cin >> i;
    }

    int res = INT_MAX;

    for (int i = 0; i < n - 1; i++)
    {

        res = min(res, (vec[i + 1] - vec[i]));
    }
    if (res < 0)
    {
        cout << 0 << nl;
        return;
    }

    cout << (res / 2) + 1 << nl;
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
}

