/**
 *    author:  Vermax
 *    created: 06.01.2026 14:43:51
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

    int n;
    cin >> n;
    string tem = to_string(n);
     int z=count(all(tem),'0');
     int one=count(all(tem),'1');
     if(z==tem.size()-1 and one==1){
        cout<<"Yes"<<endl;
        return 0;
     }
    int m = 0;
    for (int i = 0; i < tem.size(); i++)
    {
        m += (tem[i] - '0') * (tem[i] - '0');
    }
    set<int>a;
    a.insert(n);
    while (a.find(m)==a.end())
    {
        tem=to_string(m);
        a.insert(m);
        m = 0;
        for (int i = 0; i < tem.size(); i++)
        {
            m += (tem[i] - '0') * (tem[i] - '0');
        }
        if(count(all(tem),'1')==1 and tem.size()==1){
            cout<<"Yes"<<endl;
            return 0;
        }
    }
    cout << "No" << endl;

    return 0;
}
