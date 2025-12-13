/**
 *    author:  rahuliitism
 *    created: 13.12.2025 17:56:17
 **/
#include <bits/stdc++.h>
using namespace std;
#define bset(x) __builtin_popcount(x)
#define bsetl(x) __builtin_popcountll(x)
#define pos(x) __builtin_ctz(x)
#define pb push_back
#define pob pop_back
#define mp make_pair
#define scan(v)     \
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
#define print(v)                    \
  for (ll i = 0; i < v.size(); i++) \
    cout << v[i] << ' ';            \
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
  cin.tie(0)->sync_with_stdio(false);

  int n,m;cin>>n>>m;

  int ans=0;
  set<pair<int,int>>s;
  while(m>0){
    int r,c;
    cin>>r>>c;
    r--;c--;
     if(s.empty()){
    ans++;
    s.insert({r,c});
    s.insert({r+1,c});
    s.insert({r,c+1});
    s.insert({r+1,c+1});
   }
  else if(s.count({r,c})==0 and s.count({r+1,c})==0 and s.count({r,c+1})==0 and s.count({r+1,c+1})==0){
    ans++;
    s.insert({r,c});
    s.insert({r+1,c});
    s.insert({r,c+1});
    s.insert({r+1,c+1});
   }
    m--;
  }
cout<<ans<<endl;
  return 0;
}
