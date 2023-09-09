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
const int N = 1e7 + 10;
vector<int> gcd(N, 1);
void solve()
{
    ll l, r;
    cin >> l >> r;

    ll fe=-1;
    for(ll i=l;i<=r;i++){
        if(i%2==0 && i!=2){
            fe=i;
            break;
        }
    }
    if(fe!=-1){
        cout<<fe/2<<" "<<fe/2<<endl;
        return;
    }
    bool chk=false;

    for(ll i=2;i<=sqrt(r);i++){
        if(__gcd(i,r-i)!=1){
            cout<<i<<" "<<r-i<<endl;
            chk=true;
            break;
        }

    }

    if(!chk){
        cout<<-1<<endl;
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
    return 0;
}