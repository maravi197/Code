/**
 *    author:  rahuliitism
 *    created: 11-12-2025 23:04
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
  int n;
  cin >> n;
  vector<int> a(n);
  scan(a);
  vector<int> odd, even;
  for (int i = 0; i < n; i++)
  {
    if (a[i] % 2)
      odd.pb(a[i]);
    else
      even.pb(a[i]);
  }
  srtg(even);
  srtg(odd);
  for (int i = 1; i < even.size(); i++)
  {
    even[i] += even[i - 1];
  }
  if (odd.empty())
  {
    for (int i = 0; i < n; i++)
      cout << 0 << " ";
    cout << endl;
    return;
  }
  if (even.empty())
  {
    for (int i = 0; i < n; i++)
    {
      if (i % 2)
        cout << 0 << " ";
      else
        cout << odd[0] << " ";
    }
    cout << endl;
    return;
  }
  
  int sizeodd=odd.size();
  int sizeeven=even.size();
  for(int k=1;k<=n;k++){
    int takev=min(k-1,sizeeven);
    int takeo=k-takev;
    if(takeo%2==0){
      takeo++;
      takev--;
    }
    if(takev<0 or takeo>sizeodd){
      cout<<0<<" ";
    }else{
      int sum=0;
      sum+=odd[0];
      if(takev>0){
        sum+=even[takev-1];
      }
      cout<<sum<<" ";
    }
  }
  cout << endl;
}

int32_t main()
{
  cin.tie(0)->sync_with_stdio(false);

  ll _ = 1;
  cin >> _;
  while (_--)
  {
    Solve();
  }

  return 0;
}
