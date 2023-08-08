#include <iostream>
#include <bits/stdc++.h>
#define flush ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define ull unsigned long long
#define ld long double
#define fl float
#define nl '\n'
#define fori(a, b) for (int i = a; i < b; i++)
#define forj(a, b) for (int j = a; j < b; j++)
#define foril(a, b) for (ll i = a; i < b; i++)   
#define forri(a, b)for (int i = a; i >= b; i--) 
#define cy cout << "Yes" << nl
#define cn cout << "No" << nl
const int mod = 1e9 + 7;
using namespace std;

void solve()
{
   int n;
   cin>>n;
   int sum=0;
   while (n--)
   {
   int x;
   cin>>x;
   sum+=x;
   }
   if(sum&1){
    cn;
   }else{
    cy;
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