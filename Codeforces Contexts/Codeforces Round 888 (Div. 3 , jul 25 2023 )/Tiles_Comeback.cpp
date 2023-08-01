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
    ll n, k;
    cin >> n >> k;

    ll vec[n];
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    ll val = n - 1;
    ll res = 0;
    for (int i = 0; i < n; i++)
    {
        if (vec[i] == vec[0])
            res++;
        if (res == k)
        {
            val = i;
            break;
        }
    }
    if (res < k)
    {
        cn;
        return;
    }
    else
    {
        if (vec[0] == vec[n - 1])
        {
            cy;
            return;
        }
    }

    res = 0;
    for (int i = n - 1; i > val; i--)
    {
        if (vec[i] == vec[n - 1])
            res++;
    }

    if (res >= k)
        cy;
    else
        cn;
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