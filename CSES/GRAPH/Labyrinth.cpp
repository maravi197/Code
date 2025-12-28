/**
 *    author:  Vermax
 *    created: 28.12.2025 18:52:31
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
    vector<vector<char>> G(n, vector<char>(m));
    queue<pair<int, int>> q;
    pair<int,int> end,start;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> G[i][j];
            if (G[i][j] == 'A'){
                q.push({i, j});
                start={i,j};
            }
            if(G[i][j]=='B')end={i,j};    
        }
    }
    vector<vector<bool>> visit(n , vector<bool>(m , false));
    vector<vector<char>> path(n, vector<char>(m));
    vector<vector<pair<int,int>>>parent(n,vector<pair<int,int>>(m));
    char dc[4] = {'D', 'U', 'R', 'L'};
    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, 1, -1};

    visit[q.front().ff][q.front().ss] = true;
    while (!q.empty())
    {
        int tx = q.front().ff;
        int ty = q.front().ss;
        q.pop();
        if (G[tx][ty] == 'B')break;
        for (int i=0;i<4;i++)
        {
            int a = tx + dx[i];
            int b = ty + dy[i];
            if (a >= 0 and a < n and b >= 0 and b < m)
            {
                if (!visit[a][b] and G[a][b] != '#')
                {
                    visit[a][b] = true;
                    parent[a][b]={tx,ty};
                    path[a][b]=dc[i];
                    q.push({a, b});
                }
            }
        }
    
    }
    if(!visit[end.ff][end.ss]){
        no;
        return 0;
    }
    string ans;
    while(end!=start){
        char c=path[end.ff][end.ss];
        ans+=c;
        if(c=='U')end.ff++;
        if(c=='D')end.ff--;
        if(c=='R')end.ss--;
        if(c=='L')end.ss++;
    }
    yes;
    reverse(all(ans));
    cout<<ans.size()<<endl;
    cout<<ans;
    return 0;
}
