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
#define yes cout << "Yes" << endl
#define no cout << "No" << endl
#define lcm(a, b) (a / __gcd(a, b) * b)
#define print(v)                    \
  for (ll i = 0; i < v.size(); i++) \
    cout << v[i] << ' ';            \
  cout << endl;
#define ff first
#define ss second
#define vp vector<pair<ll, ll>>
#define endl '\n'
using vcl = vector<long long>;
using vcc = vector<char>;
using ll = long long;
#define int long long
#define PI 3.141592653589793238462643383279502884
const int INF = 2e5 + 10;
vector<int> R[INF];
 
int32_t main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
     int s=i*i;
    int ways = s * (s - 1) / 2;
    int bad = 0;
    bad += 8 * (i - 4) * (i - 4);
    bad += 6 * (i - 4) * 4;
 
    bad += 4 * (i - 3) * 4;
    bad += 3 * 8;
    bad += 2 * 4;
    bad /= 2;
    cout << ways - bad << endl;
  }
}
