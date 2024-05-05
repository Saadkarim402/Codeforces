#include<bits/stdc++.h>
using namespace std;
 
///////////////////////////////////////////////DEFINE//////////////////////////////////////////
 
#define f                                          first
#define s                                          second
#define pb                                         push_back
#define all(x)                                     (x).begin(), (x).end()
#define sz(x)                                      ((int)(x).size())
#define MOD                                        1000000007
#define MOD1                                       998244353
#define INF                                        1e18
#define popcount(x)                                __builtin_popcountll(x)
#define PI                                         3.141592653589793238462
                                                                              
                                                                                 
/////////////////////////////////////////TYPEDEFINE/////////////////////////////////////////
                                                                                               
typedef long long                                      ll;
typedef pair<long long, long long>                     pll;
typedef vector<pair<long long,long long>>              vpll;
typedef map<long long,long long>                       mll;      
 
 
/////////////////////////////////////////CONSTANT/////////////////////////////////////////
 
const int  inf = 0x3f3f3f3f;
const int maxn = 2e6 + 6;
const double eps = 1e-8;
const int mod = 998244353;
const int N=1e5+7;
 
 
void solve(){
    ll n;cin>>n;
    ll a[n],b[n];
    vector<ll>v;
    for(int i=0;i<n;i++){
        cin>>a[i];
        v.pb(a[i]);
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    sort(all(v));
    sort(b,b+n);
    for(int i=0;i<n;i++){
        if(v[i]<=b[i]){
            cout<<"0"<<endl;return;
        }
    }
    ll ans=1;
    for(int i=n-1;i>=0;i--){
        ll it=upper_bound(all(v),b[i])-v.begin();
        ll t=(i-it)+1;
        ans*=t;
        ans=ans%MOD;
    }
    cout<<ans<<endl;


 
 
}
 
int main(){
 
ios_base::sync_with_stdio(false);
cin.tie(NULL);cout.tie(NULL);
 
ll $ ;cin>>$;
 
while($--){
 
solve();
 
}

return 0;
}