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
    string str = "";
    int n=64;
    while (n--)
    {
        char ch;
        cin >> ch;
        if (ch >= 'a' && ch <= 'z')
        {
            str.push_back(ch);
        }
    }

    cout << str << nl;
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