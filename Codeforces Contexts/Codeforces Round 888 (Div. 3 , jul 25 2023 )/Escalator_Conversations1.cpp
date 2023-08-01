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
    int n, m, k, h;
    cin >> n >> m >> k >> h;

    vector<int> height(n);
    for (auto &i : height)
    {
        cin >> i;
    }
    queue<int> mp;
    mp.push(1);
    mp.push(2);
    int c = 0;

    for (int i = 0; i < n; i++)
    {
        int g = abs(h - height[i]);

        bool f1 = mp.size() && g % k == 0;
        bool f2 = mp.size() && g <= (m - 1) * k;
        bool f3 = mp.size() && g;

        if (mp.size() && f1 && f2 && f3)
        {
            c++;
        }
    }

    cout << c << nl;
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