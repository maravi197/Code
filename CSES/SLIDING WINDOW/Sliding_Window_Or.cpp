/**
 *    author:  rahuliitism
 *    created: 14.12.2025 16:56:26
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
// #define int long long
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
    int n, k;
    scanf("%d %d",&n,&k);
    int x, a, b, c;
    scanf("%d %d %d %d",&x,&a,&b,&c);
    vector<int> aa(n);
    aa[0] = x;
    for (int i = 1; i < n; i++)
    {
        aa[i] = (1LL*a * aa[i - 1] + b) % c;
    }
    if(k==1){
        int ans=0;
        vi(i,n){
            ans^=aa[i];
        }
        cout<<ans<<endl;
        return 0;
    }
    int ans = 0;
    int bit[32]={0};
    uint32_t track = 0;
    for (int i = 0; i < k; i++)
    {
        int num = aa[i];
        while (num)
        {
            int j = __builtin_ctz(num);
            bit[j]++;
            track |= (1u << j);
            num &= num - 1;
        }
    }
    ans = track;
    for (int i = k; i < n; i++)
    {
        int num = aa[i - k];
        while (num)
        {
            int j = __builtin_ctz(num);
            bit[j]--;
            if (!bit[j])
                track ^= (1u << j);
            num &= num - 1;
        }
        int add = aa[i];
        while (add)
        {
            int j = __builtin_ctz(add);
            if (!bit[j])
                track |= (1u << j);
            bit[j]++;
            add &= add - 1;
        }
        ans ^= track;
    }
    printf("%d\n",ans);

    return 0;
}
