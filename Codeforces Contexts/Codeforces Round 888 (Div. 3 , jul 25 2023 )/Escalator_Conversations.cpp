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
    ll n, m, i, j, k;
    cin >> n;
    vector<ll> vec(n);

    for(auto &i:vec){
        cin>>i;
    }
    vector<int> M, N;
    vector<int> res;
    for (i = 0; i < n; i++)
    {
        if (vec[i] & 1)
            M.push_back(vec[i]);
        else
            N.push_back(vec[i]);
    }
    sort(N.begin(), N.end());
    sort(M.begin(), M.end());
    ll cnt1 = 0, cnt2 = 0;
    for (i = 0; i < n; i++)
    {
        if (vec[i] & 1)
        {
            res.push_back(M[cnt1]);
            ++cnt1;
        }
        else
        {

            res.push_back(N[cnt2]);
            ++cnt2;
        }
    }
    if (is_sorted(res.begin(), res.end()))
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
