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

// Function to check upper bound and update the answer
void upper_b(const vector<long long> &arr, long long mid, int &ans)
{
    int left = 0, right = arr.size() - 1;

    while (left <= right)
    {
        int m = left + (right - left) / 2;
        if (arr[m] <= mid)
        {
            left = m + 1;
        }
        else
        {
            right = m - 1;
        }
    }

    ans += left;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<long long> vec(n);
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
        }

        vector<long long> res(n, 0);
        for (int i = 1; i < n; i++)
        {
            res[i] = vec[i] - vec[i - 1] - 1;
        }

        for (int i = 1; i < n; i++)
        {
            res[i] += res[i - 1];
        }

        int cal = 0;
        while (k--)
        {
            int m, n;
            cin >> m >> n;
            long long l_val = vec[m - 1] - m + 1 + res[m - 1];
            long long r_val = vec[n - 1] - n + 1 + res[n - 1];
            upper_b(vec, r_val, cal);
            upper_b(vec, l_val - 1, cal);
        }

        cout << cal << nl;
    }

    return 0;
}