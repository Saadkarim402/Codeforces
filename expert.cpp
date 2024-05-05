#include<bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
 
using namespace std;
//using namespace __gnu_pbds;
 
#define ff first
#define ss second
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())
#define MOD 1000000007
#define PI 3.141592653589793238462

typedef long long   ll;

const int  inf = 0x3f3f3f3f;
const int maxn = 2e6 + 6;
const double eps = 1e-8;
const int mod = 998244353;
const int N=1e5+7;
 
//typedef tree<ll,null_type,less_equal<ll>,rb_tree_tag,tree_order_statistics_node_update>ordered_set;
//ll powerFun(ll x, ll p){ll res = 1;for(int i = 1; i<=p; i++){res *= x;}return res;}
//ll lcm(ll a, ll b){return (a * b) / __gcd(a, b);}
//bool isPrime(ll n){if (n <= 1)return false;if (n <= 3)return true;if (n % 2 == 0 || n % 3 == 0)return false;for (ll i = 5; i * i <= n; i = i + 6)if (n % i == 0 || n % (i + 2) == 0)return false;return true;}
//vector<ll>prime;void sieve_of_eratosthenes(ll n){vector<bool> is_prime(n+1, true);is_prime[0] = is_prime[1] = false;for (ll p = 2; p * p <= n; p++) {if (is_prime[p]) {for (ll i = p * p; i <= n; i += p) {is_prime[i] = false;}}}for (ll i = 2; i <= n; i++) {if (is_prime[i]) {prime.pb(i);}}}
//ll expo(ll a, ll b, ll mod) {ll res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}
//ll mminvprime(ll a, ll b) {return expo(a, b - 2, b);}
//ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
//ll mod_div(ll a, ll b, ll m) {a = a % m; b = b % m; return (mod_mul(a, mminvprime(b, m), m) + m) % m;}

void execute(){
     ll n,c;cin>>n>>c;
     ll a[n];for(int i=0;i<n;i++)cin>>a[i];

     ll pre[n+1]={0};
     ll pos=0;
     ll s=0;
     for(int i=0;i<n;i++){
          s+=a[i];
          pre[i]=s;
          if(pre[pos]+a[i]>=(i+1)*c) pos=i;
     }
     if(pos==n-1){
          cout<<"Yes"<<endl;return;
     }
     cout<<"No"<<endl; 
}
 
int main(){
 
ios_base::sync_with_stdio(false);
cin.tie(NULL);cout.tie(NULL);
 
ll Testcases ;cin>>Testcases;
 
while(Testcases--){
 
execute();
 
}

return 0;
}