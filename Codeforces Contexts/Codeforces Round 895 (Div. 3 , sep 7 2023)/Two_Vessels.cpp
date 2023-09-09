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
    ld m, n, k;
    cin >> m >> n >> k;
    int cnt = 0;
    while (m != n)
    {
        cnt++;
        ld diff = abs(m - n);
        ld val;
        if (diff / 2 >= k)
        {
            val = k;
        }
        else
        {
            val = diff / 2;
        }
        if (m > n)
        {
            m -= val;
            n += val;
        }
        else
        {
            n -= val;
            m += val;
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

//    int l, r;
//     cin >> l >> r;
//     for (int i = 2; i <N; i++)
//     {
//         for (int j = i + 1; j <= r; j++)
//         {
//             if (gcd[i] !=1 && gcd[j]!=1)
//             {
//                 cout << i << " " << j << endl;
//                 return;
//             }
//         }
//     }
//     cout << -1 << endl;


//    for (int i = 2; i < N; i++)
//     {
//         for (int j = i * 2; j < N; j += i)
//         {
//             gcd[j] = i;
//         }
//     }