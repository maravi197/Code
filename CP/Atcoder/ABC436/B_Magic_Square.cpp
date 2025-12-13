/**
 *    author:  rahuliitism
 *    created: 13.12.2025 17:35:59
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

  int n;cin>>n;
  vector<vector<int>>a(n,vector<int>(n));
  a[0][(n-1)/2]=1;
  int r=0;
  int c=(n-1)/2;
  int p=1;
  int k=(n*n)-1;
  while(k>0){
    int i=(r-1)%n;
    if(i<0)i+=n;
    int j=(c+1)%n;
    if(min(i,j)>=0 and max(i,j)<n and a[i][j]==0){
        a[i][j]=p+1;
        p++;
        r=i;
        c=j;
    }else{
        int ii=(r+1)%n;
        int jj=c;
        if(ii>=0 and ii<n and jj>=0 and jj<n and a[ii][jj]==0 ){
            a[ii][jj]=p+1;
            p++;
            r=ii;
            c=jj;
        }
    }
    k--;
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<a[i][j]<<" ";
    }
    cout<<endl;
  }

  return 0;
}
