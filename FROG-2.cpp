                 /*^^::^^^anmit007^^::^^^*/
//---------------------------------------------------------------------------------------//
#include<bits/stdc++.h>
#define ll          long long
#define ld          long double
#define int         int64_t
#define pb          push_back
#define endl        '\n'
#define pll         pair<int,int>
#define vll         vector<int>
#define all(a)      (a).begin(),(a).end()
#define in(a)       insert(a)
#define F           first
#define S           second
#define sz(x)       (int)x.size()
#define hell        1000000007
#define lbnd        lower_bound
#define ubnd        upper_bound
#define bs          binary_search
#define mi          map<int,int>
#define set_bits(x) _builtin_popcount(x)
#define gcd(a,b)    __gcd((a),(b))
#define lcm(a,b)    ((a)*(b)) / gcd((a),(b))
#define ios     ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define REP(i,a,b) for(ll i=a;i<b;i++)
#define REPI(i,a,b) for(ll i=b-1;i>=a;i--)
using namespace std;
static mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
//----------------------------Trace---------------------------------------//
#define trace1(x)                cerr<<#x<<": "<<x<<endl
#define trace2(x, y)             cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define trace3(x, y, z)          cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
#define trace4(a, b, c, d)       cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
#define trace5(a, b, c, d, e)    cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
#define trace6(a, b, c, d, e, f) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl
//-----------------------Exponentiations---------------------------------------//
int binary_exponentiaion(int a , int n)
{
int res = 1 ;while (n){if (n % 2 == 0) res *= a  , n-- ;  else a *= a , n /= 2 ;}return res ;
}

int modular_exponnentiation(int a , int n , int p)
{
  int res = 1 ;
  while (n){if (n % 2)res = (res * a) % p , n -- ; else a = (a * a) % p , n /= 2 ; }return res;
}
//-------------------------Bits-----------------------------------//
int low_bit(int x) {
    for(int i = 0 ;; i++){if(x&(1<<i))return 1<<i;}
}
//------------------------Misc-----------------------------------//
ll quad(ll a, ll b , ll c ){
    long double D=b*b-4*a*c;long double ans=0;
    if(D<=0)
    {return -1;}
    else
    {ans=(-(long double)b+sqrt(D))/(2.0*(long double)a);}
    if(ceil(ans)==floor(ans)){ll ans2=ans;return ans2;}
    else{return -1;}
}
//------------------------counting-----------------------------------//
ll countDigit(long long n)
{ll count = 0;while (n != 0){ n = n / 10; ++count;}return count;}

//------------------------Input_Stuff----------------------------------//
void input_vec(int n,vector<ll>&v)
{for(int i = 0  ; i < n ; i++){int x ; cin >> x ; v.pb(x);}}
void input_Freqmap(int n , vector<ll>&v , map<int,int>&m)
{for(int i = 0  ; i < n ; i++){int x ; cin >> x ; v.pb(x);}for(int i = 0 ; i < n ; i++){m[v[i]]++;}}
void input_set(int n , set<int>&s)
{for(int i = 0 ; i < n ; i++){int x ; cin >> x ; s.insert(x);}}
void input_multiset(int n , multiset<int>&ms)
{for(int i = 0 ; i < n ; i++){int x ; cin >> x ; ms.insert(x);}}
//------------------------Output_Stuff---------------------------------------------------------------------////---------------------------------------------------------------------//
void output_vec(vector<ll>&v)
{for(auto it:v){cout << it<< " " ;};}
void output_Freqmap(map<int,int>&m)
{for(auto it : m) cout << it.F << " " << it.S << endl;}
void output_set(set<int>&s)
{for(auto it : s) cout << it << " " ;}
void output_multiset(multiset<int>&ms)
{for(auto it : ms) cout << it << " " ;}
//------------------------->START<------------------------------------------//
void solve()
{
ll n , k ; 
cin >> n  >> k; 
vll arr(n);
for(int i = 0 ; i <= n-1 ; i++){
    cin >>arr[i];
}
vll dp(n,hell);

dp[0] = 0 ;
for(int i  = 1 ; i <= n-1 ; i++){
    for(int j = 1 ; j <= k ; j++){
        if(i-j<0)break;
        dp[i] = min(dp[i],dp[i-j]+abs(arr[i]-arr[i-j]));
    }
}
cout << dp[n-1];
}
//------------------------->END<------------------------------------------------//
signed main()
{
ios
//------------------------TXT-FILE-----------------------------------------------//
// #ifndef ONLINE_JUDDGE
//  freopen("output.txt", "w", stdout);
// #endif
// //-------------------------END---------------------------------------------------//
ll test = 1;
//cin >> test ;

while (test--) 
{
solve();
}
//cerr<<endl;
//err << (float)clock()/CLOCKS_PER_SEC * 1000 << "ms" << endl;
}
