#include<bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>

using namespace std;
// using namespace __gnu_pbds;

#define ff first
#define ss second
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())
#define MOD 1000000007
#define PI 3.141592653589793238462

typedef long long ll;

const int inf = 0x3f3f3f3f;
const int maxn = 2e6 + 6;
const double eps = 1e-8;
const int mod = 998244353;
const int N = 1e5 + 7;

// typedef tree<ll, null_type, less_equal<ll>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
// ll powerFun(ll x, ll p) { ll res = 1; for (int i = 1; i <= p; i++) { res *= x; } return res; }
// ll lcm(ll a, ll b) { return (a * b) / __gcd(a, b); }
// bool isPrime(ll n) { if (n <= 1) return false; if (n <= 3) return true; if (n % 2 == 0 || n % 3 == 0) return false; for (ll i = 5; i * i <= n; i = i + 6) if (n % i == 0 || n % (i + 2) == 0) return false; return true; }
// vector<ll> prime; void sieve_of_eratosthenes(ll n) { vector<bool> is_prime(n + 1, true); is_prime[0] = is_prime[1] = false; for (ll p = 2; p * p <= n; p++) { if (is_prime[p]) { for (ll i = p * p; i <= n; i += p) { is_prime[i] = false; } } } for (ll i = 2; i <= n; i++) { if (is_prime[i]) { prime.pb(i); } } }
void rt(vector<ll>& arr) {
    if (arr.empty()) return; // Handle empty array

    int lastElement = arr.back(); // Get the last element
    arr.pop_back();               // Remove the last element
    arr.insert(arr.begin(), lastElement); // Insert it at the beginning
}


void execute() {
    ll n;cin>>n;
    ll a[n];for(int i=0;i<n;i++)cin>>a[i];

    set<ll>st,used;
    for(int i=1;i<=n;i++)st.insert(i);
    for(int i=0;i<n;i++){
        st.erase(st.find(a[i]));
    }
    ll ans=0;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        //if available then assign
        if(used.find(a[i])==used.end()){
            ans++;
            used.insert(a[i]);
            v.pb(a[i]);
        }
        //if not assign any random from st
        else{
            auto ele=st.begin();
            v.pb(*ele);
            cout<<*ele<<endl;
            st.erase(st.find(*ele));
        }
    }
    // vector<ll>useless,phasa;
    // for(int i=0;i<n;i++){
    //     //phasa hua
    //     if(a[i]==(i+1)){
    //         phasa.pb(i);
    //     }
    //     //useless
    //     else if(a[i]!=v[i]){
    //         useless.pb(i);
    //     }
    // }
    // if(phasa.size()==0){
    //     cout<<ans<<endl;
    //     for(auto it:v){
    //         cout<<it<<" ";
    //     }
    //     cout<<endl;
    //     return;
    // }
    // else if(phasa.size()==1){
    //     if(useless.size()==0){
    //         cout<<ans-1<<endl;
    //         for(auto it:v){
    //             cout<<it<<" ";
    //         }
    //         cout<<endl;
    //         return;
    //     }
    //     else{
    //         swap(v[phasa.back()],v[useless.back()]);
    //         cout<<ans<<endl;
    //         for(auto it:v){
    //             cout<<it<<" ";
    //         }
    //         cout<<endl;
    //         return;
    //     }
    // }
    // if(phasa.size()==2){
    //         swap(v[phasa[0]],v[phasa[1]]);
    //          cout<<ans<<endl;
    //         for(auto it:v){
    //             cout<<it<<" ";
    //         }
    //         cout<<endl;
    //         return;
    // }
    // else{
    //    // rt(phasa);


    //         cout<<ans<<endl;
    //         for(auto it:v){
    //             cout<<it<<" ";
    //         }
    //         cout<<endl;
    //         return;


    // }


}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll Testcases;
    cin >> Testcases;

    while (Testcases--) {
        execute();
    }

    return 0;
}