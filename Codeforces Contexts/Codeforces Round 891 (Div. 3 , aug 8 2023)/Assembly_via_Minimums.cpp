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
#define fori(a, b) for (int i = a; i < b; i++)
#define forj(a, b) for (int j = a; j < b; j++)
#define foril(a, b) for (ll i = a; i < b; i++)
#define forri(a, b) for (int i = a; i >= b; i--)
#define cy cout << "Yes" << nl
#define cn cout << "No" << nl
const int mod = 1e9 + 7;
using namespace std;

void solve()
{
    int n;
    cin >> n;

    if (n == 1)
    {
        int x;
        cin >> x;
        cout << x << endl;
    }
    else
    {
        int b[n * (n - 1) / 2];
        for (int i = 0; i < n * (n - 1) / 2; i++)
            cin >> b[i];

        int a[n];

        for (int i = 0; i < n; i++)
        {
            a[i] = b[i];

            int index = i * (n - 1) - (i * (i + 1)) / 2;
            for (int j = i + 1; j < n; j++)
            {
                index++;
                a[j] = min(a[j], b[index]);
            }
        }

        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
        cout << endl;
    }
}

int main()
{

    // flush;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}