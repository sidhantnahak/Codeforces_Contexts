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
    int a, b, c;
    cin >> a >> b >> c;

    if (a == b)
    {
        cout << 0 << nl;
        return;
    }
    int cnt = 0;
    if (a > b)
    {
        while (true)
        {
            if (a == b)
            {
                break;
            }
            else if (a - b <= c)
            {
                cnt++;
                break;
            }
            else
            {
                cnt++;
                a = a - c;
                b = b + c;
            }
        }
    }
    else
    {
        while (true)
        {
            if (a == b)
            {
                break;
            }
            else if (b - a <= c)
            {
                cnt++;
                break;
            }
            else
            {
                cnt++;
                a = a + c;
                b = b - c;
            }
        }
    }
    cout << cnt << endl;
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