/**
 *    author:  rahuliitism
 *    created: 13.12.2025 18:33:59
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

int32_t main()
{
    cin.tie(0)->sync_with_stdio(false);

    int h, w;
    cin >> h >> w;
    vector<string> a(h);
    for (auto &it : a)
    {
        cin >> it;
    }
    vector<vector<int>> visi(h, vector<int>(w, 0));
    vector<vector<int>> dist(h, vector<int>(w, 0));
    map<char, vector<pair<int, int>>> letters;
    vector<pair<int, int>> dire = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
    map<char, bool> used;
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            if (a[i][j] != '.' and a[i][j] != '#')
                letters[a[i][j]].pb({i, j});
        }
    }
    queue<pair<int, int>> q;
    q.push({0, 0});
    visi[0][0] = 1;
    while (!q.empty())
    {
        auto [ni, nj] = q.front();
        if (ni == h - 1 and nj == w - 1)
        {
            cout << dist[ni][nj];
            return 0;
        }
        q.pop();
        for (auto &it : dire)
        {
            int newi = it.ff + ni;
            int newj = it.ss + nj;
            if (min(newi, newj) >= 0 and newi < h and newj < w)
            {
                if (a[newi][newj] != '#' and visi[newi][newj] == 0)
                {
                    dist[newi][newj] = dist[ni][nj] + 1;
                    q.push({newi, newj});
                    visi[newi][newj] = 1;
                }
            }
        }
        if (min(ni, nj) >= 0 and ni < h and nj < w and a[ni][nj] != '#' and a[ni][nj] != '.' and used[a[ni][nj]] == false)
        {
            for (auto &itt : letters[a[ni][nj]])
            {
                int idx = itt.ff;
                int idy = itt.ss;
                if ((idx != ni or nj != idy) and visi[idx][idy] == 0)
                {
                    dist[idx][idy] = dist[ni][nj] + 1;
                    q.push({idx, idy});
                    visi[idx][idy] = 1;
                }
            }
            used[a[ni][nj]] = true;
        }
    }
    cout << -1 << endl;
}
