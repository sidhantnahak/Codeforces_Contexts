

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
    string str;
    cin >> str;
    int i = 0;
    while (str[i] < '5' && i < str.length())
    {
        i++;
    }
    if (i == str.length())
    {
        cout << str << endl;
    }
    else
    {
        for (int j = i + 1; j < str.length(); j++)
        {
            str[j] = '0';
        }
        for (int j = i; j > 0; j--)
        {
            if (str[j] >= '5')
            {
                str[j - 1] += 1;
                str[j] = '0';
            }
        }
        if (str[0] >= '5')
        {
            cout << 10;
        }
        else
            cout << str[0];
        for (int i = 1; i < str.length(); i++)
            cout << str[i];
        cout << endl;
    }
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