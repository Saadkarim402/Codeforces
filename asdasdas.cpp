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
 
 
void solve(){
    ll n;cin>>n;
    string ans="";
    ll s=0;
    ll t=min(26,n-2);
    s+=t;
    ans.pb(t+'a');
    t=min(26,n-1-t);
    s+=t;
    ans.pb(t+'a');
    t=min(26,n-s);
    ans.pb(t+'a');
    for(int i=2;i>=0;i--){
        cout<<ans[i];
    }
    cout<<endl;

 
 
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