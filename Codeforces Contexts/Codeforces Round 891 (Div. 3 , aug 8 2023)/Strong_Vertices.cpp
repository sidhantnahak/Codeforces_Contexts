

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
#define fori(a, b) for (ll i = a; i < b; i++)
#define forj(a, b) for (ll j = a; j < b; j++)
#define foril(a, b) for (ll i = a; i < b; i++)
#define forri(a, b) for (int i = a; i >= b; i--)
#define cy cout << "Yes" << nl
#define cn cout << "No" << nl
const int mod = 1e9 + 7;
using namespace std;
#define sz(x) ((int)(x).size())
void solve()
{
    ll n, m, i, j, k;
    // ll n;
    cin >> n;
    vector<ll> arr(n), brr(n);
    fori(0, n)
        cin >>
        arr[i];
    fori(0, n)
        cin >>
        brr[i];
    vector<pair<ll,ll>> res;
    ll maxmimum = INT_MIN;
    fori(0, n)
    {
        res.push_back({arr[i] - brr[i], i + 1});
        maxmimum = max(maxmimum, arr[i] - brr[i]);
    }
    vector<ll> cnt;
    fori(0, n)
    {
        if (res[i].first == maxmimum)
        {
            cnt.push_back(res[i].second);
        }
    }
    cout <<  sz(cnt) << nl;
    for (auto it : cnt)
        cout << it << " ";
        cout << nl;
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
