/**
 *    author:  Vermax
 *    created: 29.12.2025 17:17:11
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

vector<vector<int>>adj;
vector<int>vis;
vector<int>parent;
int start=-1,endd=-1;
bool dfs(int node,int p){
     vis[node]=1;
     for(auto &it:adj[node]){
         if(it==p)continue;
         if(!vis[it]){
            parent[it]=node;
            if( dfs(it,node))return true;
         }else if(vis[it]){
                start=it;
                endd =node;
                return true;
         } 
     }
     return false;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    adj.resize(n+1);
    vis.assign(n+1,0);
    parent.resize(n+1);
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x].pb(y);
        adj[y].pb(x);
    }
   
   for(int i=1;i<=n;i++){
      if(!vis[i]){
        if(dfs(i,-1))break;
      }
   }
  if(start==-1){
    cout<<"IMPOSSIBLE";
    return 0;
  }
   vector<int>ans;
   ans.pb(start);
   while(endd!=start){
    ans.pb(endd);
    endd=parent[endd];
   }
   ans.pb(start);
   cout<<ans.size()<<endl;
   print(ans);
    return 0;
}
