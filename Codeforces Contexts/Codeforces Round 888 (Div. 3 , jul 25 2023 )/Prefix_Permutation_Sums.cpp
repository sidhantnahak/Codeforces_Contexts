#include <iostream>
#include <bits/stdc++.h>
#define flush                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define ll long long
#define ull unsigned long long
#define ld long double
#define int long long
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
// const int mod = 1e9 + 7;
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> vec(n - 1);
    set<int> myset;
    myset.insert(n);
    for (int i = 0; i < n - 1; i++)
    {
        cin >> vec[i];
        myset.insert(i + 1);
    }
    int fl = 1;
    int val = -1;
    if (myset.find(vec[0]) != myset.end())
    {
        myset.erase(myset.find(vec[0]));
    }
    else
    {
        if (val == -1)
            val = vec[0];
        else
            fl = 0;
    }
    for (int i = 1; i < n - 1; i++)
    {
        int g = vec[i] - vec[i - 1];
        if (myset.find(g) != myset.end())
        {
            myset.erase(myset.find(g));
        }
        else
        {
            if (val == -1)
                val = g;
            else
            {
                fl = 0;
                break;
            }
        }
    }
    if (fl == 0)
    {
        cn;
    }
    else
    {
        int res = 0;
        for (auto val : myset)
            res += val;
        if (val == -1)
        {
            int req = n * (n + 1) / 2;
            if (req - vec[n - 2] == res)
                cy;
            else
                cn;
        }
        else
        {
            if (res == val)
                cy;
            else
                cn;
        }
    }
}

signed main()
{

    flush;
    int t;
    cin >> t;
    while (t--)
    {

        solve();
    }

}