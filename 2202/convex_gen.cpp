
#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define mod 1000000007
#define inf 1e18
#define all(x) x.begin(), x.end()
#define eb emplace_back
#define ff first
#define ss second
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define dtob(p, n) bitset<p>(n).to_string()
#define btod(bin) stoi(bin, nullptr, 2)
#define ok cout << "Eureka" << nl
#define nl '\n'
#define SH 0
typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<ll> vl;
typedef vector<pll> vpll;

int main()
{
    fastio;
    freopen("C:\\Users\\HP\\Desktop\\New folder\\convex_input.txt", "w", stdout);
    for (int i = 0; i <= 1000; i++)
    {
        ll a = rand() % 1000;
        ll b = rand() % 1000;
        if (i & 1)
        {
            a *= -1;
            b *= -1;
        }
        if (a != 0 && b != 0)
            cout << a << " " << b << nl;
    }
    cout << endl;
    return SH;
}
