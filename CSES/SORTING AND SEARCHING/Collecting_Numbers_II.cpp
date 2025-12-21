/**
 *    author:  rahuliitism
 *    created: 21.12.2025 17:36:21
 **/
#include <bits/stdc++.h>
using namespace std;
#define bset(x) __builtin_popcount(x)
#define bsetl(x) __builtin_popcountll(x)
#define pos(x) __builtin_ctz(x)
#define pb push_back
#define pob pop_back
#define mp make_pair
#define scan(v)       \
    for (auto &i : v) \
    cin >> i
#define srt(v) sort(v.begin(), v.end())
#define ma(v) *max_element(v.begin(), v.end())
#define mi(v) *min_element(v.begin(), v.end())
#define srtg(v) sort(v.begin(), v.end(), greater<>())
#define vi(i, n) for (ll i = 0; i < n; i++)
#define vii(i, n) for (ll i = 1; i < n; i++)
#define viii(i, n) for (ll i = 1; i <= n; i++)
#define all(v) v.begin(), v.end()
#define suma(a) accumulate(all(a), 0LL)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define lcm(a, b) (a / __gcd(a, b) * b)
#define print(v)                      \
    for (ll i = 0; i < v.size(); i++) \
        cout << v[i] << ' ';          \
    cout << endl;
#define ff first
#define ss second
#define int long long
#define sz(x) (int)(x.size())
#define vp vector<pair<ll, ll>>
#define endl '\n'
using vcl = vector<long long>;
using vcc = vector<char>;
using ll = long long;
#define PI 3.141592653589793238462643383279502884
#define inf 0x3f3f3f3f
const int MOD = 1e9 + 7;
const int N = 1e5 + 5;

void Solve()
{
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> a;
    vector<int> b;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        b.pb(x);
        a.push_back({x, i});
    }
    srt(a);
    int ans = 1;
    for (int i = 1; i < n; i++)
    {
        if (a[i].ss < a[i - 1].ss)
            ans++;
    }

    for (int i = 0; i < m; i++)
    {
        int r, s;
        cin >> r >> s;
        r--;
        s--;
        if (r > s)
            swap(r, s);
        if (r == s)
        {
            cout << ans << endl;
            continue;
        }
        int nr = b[r] - 1;
        int ns = b[s] - 1;
        int rbefore = nr - 1;
        int rafter = nr + 1;
        int sbefore = ns - 1;
        int safter = ns + 1;
        if (abs(a[nr].ff - a[ns].ff) == 1)
        {
            if (b[r] > b[s])
            {
                if (s > r)
                    ans--;
                else
                    ans++;

                if (rafter < n and r > a[rafter].ss)
                    ans--;
                if (rafter < n and s > a[rafter].ss)
                    ans++;
                if (sbefore >= 0 and s < a[sbefore].ss)
                    ans--;
                if (sbefore >= 0 and r < a[sbefore].ss)
                    ans++;
            }
            else
            {
                if (s < r)
                    ans--;
                else
                    ans++;

                if (rbefore >= 0 and r < a[rbefore].ss)
                    ans--;
                if (rbefore >= 0 and s < a[rbefore].ss)
                    ans++;
                if (safter < n and s > a[safter].ss)
                    ans--;
                if (safter < n and r > a[safter].ss)
                    ans++;
            }
        }
        else
        {
            if (rbefore >= 0 and r < a[rbefore].ss)
                ans--;
            if (rbefore >= 0 and s < a[rbefore].ss)
                ans++;
            if (rafter < n and r > a[rafter].ss)
                ans--;
            if (rafter < n and s > a[rafter].ss)
                ans++;
            if (sbefore >= 0 and s < a[sbefore].ss)
                ans--;
            if (sbefore >= 0 and r < a[sbefore].ss)
                ans++;
            if (safter < n and s > a[safter].ss)
                ans--;
            if (safter < n and r > a[safter].ss)
                ans++;
        }
        a[nr].ss = s;
        a[ns].ss = r;
        b[s]=a[nr].ff;
        b[r]=a[ns].ff;

        cout << ans << endl;
    }
    return 0;
}
