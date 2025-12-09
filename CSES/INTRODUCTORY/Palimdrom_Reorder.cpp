/*
    After 2 Hours of Debugging...
 
        .-""""-.
       / -   -  \
      |  o   o  |
      |   .-.   |
      |  (___)  |
       \       /
     ___|`-._.-'|___
    /     Rahul     \
    |   Half Alive   |
    \________________/
 
*/
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
const int mod = 998244353;
const int MOD = 1e9 + 7;
 
int32_t main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string s;
  cin >> s;
  map<char, int> f;
  for (auto &it : s)
    f[it]++;
  int od = 0;
  for (auto &it : f)
  {
    if (it.ss % 2)
      od++;
  }
  if (od > 1)
  {
    cout << "NO SOLUTION" << endl;
    return 0;
  }
  vector<pair<int, char>> te;
  for (auto &it : f)
    te.pb({it.ss, it.ff});
  if (od == 0)
  {
    string ans="";
    for (int i = 0; i < te.size(); i++)
    {
      int n=te[i].ff/2;
      ans=ans+string(n,te[i].ss);
      ans=string(n,te[i].ss)+ans;
    }
    cout<<ans<<endl;
    return 0;
  }
 
  if (od == 1)
  {
    string ans="";
    for(int i=0;i<te.size();i++){
      if(te[i].ff%2){
        ans+=string(te[i].ff,te[i].ss);
        break;
      }
    }
  
    for (int i = 0; i < te.size(); i++)
    {
      if(te[i].ff%2==0){int n=te[i].ff/2;
      ans=ans+string(n,te[i].ss);
      ans=string(n,te[i].ss)+ans;
      }
    }
    cout<<ans<<endl;
    return 0;
 
  }
 
}
