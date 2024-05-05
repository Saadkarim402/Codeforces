#include<bits/stdc++.h>
using namespace std;
 
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

vector<ll> func(int n) 
{ 
    vector<ll>v;
    // Note that this loop runs till square root 
    for (int i=1; i<=sqrt(n); i++) 
    { 
        if (n%i == 0) 
        { 
            // If divisors are equal, print only one 
            if (n/i == i) 
                v.pb(i);
  
            else // Otherwise print both 
                v.pb(i);
                v.pb(n/i); 
        } 
    } 
    return v;
}
 
 
void solve(){
    ll x,n;cin>>x>>n;
    vector<ll>temp=func(x);
    set<ll>st;
    for(int i=0;i<sz(v);i++){
        st.insert(v[i]);
    }
    auto it=st.upper_bound(n);
    cout<<x/(*it)<<endl;

    
    
 
 
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