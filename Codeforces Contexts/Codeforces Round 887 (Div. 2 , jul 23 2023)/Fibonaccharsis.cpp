

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

vector<array<int, 2>> vec(901);

void Fab_compute()
{
    array<int, 2> back = {1, 0}, back_back = {0, 1};
    vec[1] = back;
    vec[2] = back_back;
    for (int i = 3; i < 901; ++i)
    {
        back_back = vec[i - 2];
        back = vec[i - 1];
        array<int, 2> make_vec;
        make_vec[0] = back_back[0] + back[0];
        make_vec[1] = back_back[1] + back[1];
        vec[i] = make_vec;
        back_back = back;
        back = make_vec;
    }
}

void solve()
{

    int n, k;
    cin >> n >> k;

    if (k >= 901)
    {
        cout << 0 << endl;
        return;
    }

    array<int, 2> get_result = vec[k];
    int ans = 0;
    for (int i = 0; i <= n; ++i)
    {
        int temp = (n - get_result[0] * i);
        if (temp % get_result[1] == 0)
        {
            if (temp / get_result[1] >= i)
            {
                ++ans;
            }
        }
    }

    cout << ans << endl;
}

int32_t main()
{

    flush;
    Fab_compute();

    int t;
    cin >> t;
    while (t--)
    {

        solve();
    }
}
