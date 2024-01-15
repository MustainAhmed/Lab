#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define mod 1000000007
#define inf (1LL << 62)
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

bool check_determinant(pll p1, pll p2, pll p3)
{
    ll x1, x2, x3, y1, y2, y3;
    x1 = p1.ff;
    y1 = p1.ss;
    x2 = p2.ff;
    y2 = p2.ss;
    x3 = p3.ff;
    y3 = p3.ss;
    if (x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2) < 0)
        return true;
    return false;
}

int main()
{
    fastio;
    ll sum = 0, tmp = 0, res = 0, cnt = 0, ct = 0, ans = 0, mn = LONG_MAX, mx = 0;
    bool flag = true, fun = false, f = false;
    fstream file;
    file.open("C:\\Users\\HP\\Desktop\\New folder\\convex_input.txt");
    vector<pair<ll, ll>> v;
    while (!file.eof())
    {
        ll p, q;
        file >> p;
        file >> q;
        v.push_back({p, q});
    }
    ll n = v.size();
    file.close();
    sort(v.begin(), v.end());
    stack<pair<ll, ll>> st;
    st.push(v[0]);
    st.push(v[1]);
    st.push(v[2]);
    ll i = 3;
    while (i < n)
    {
        pair<ll, ll> p1, p2, p3;
        p2 = st.top();
        st.pop();
        p1 = st.top();
        p3 = v[i];
        i++;
        while (check_determinant(p1, p2, p3) && st.size() >= 3)
        {
            p2 = p1;
            st.pop();
            p1 = st.top();
        }
        st.push(p2);
        st.push(p3);
    }
    vpll points;
    cout << st.size() << nl;
    while (st.size())
    {
        points.push_back(st.top());
        st.pop();
    }
    reverse(points.begin(), points.end());
    for (auto u : points)
    {
        cout << u.ff << " " << u.ss << nl;
    }
    return SH;
}
