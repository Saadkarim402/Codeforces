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
vector<ll> maxSlidingWindow(ll nums[], int k,int n) {
        deque<ll>st;
        vector<ll>ans;
        for(int i=0;i<n;i++){
            if(!st.empty()&&st.front()==i-k) st.pop_front();

            while(!st.empty()&&nums[st.back()]<nums[i]){
                st.pop_back();
            }
            st.push_back(i);

            if(i>=k-1) ans.push_back(nums[st.front()]);
        }
        return ans;
    }


void execute() {
    ll n,d,k;cin>>n>>d>>k;
    ll ind[n+1]={0};
    for(int i=0;i<k;i++){
        ll l,r;cin>>l>>r;
        ind[l-1]+=1;
        ind[r]+=-1;
    }
    
    ll c=0;
    for(int i=0;i<n;i++){
        c+=ind[i];
        ind[i]=c;
    }
    vector<ll>v=maxSlidingWindow(ind,d,n);

    ll maxi=-1e9,mini=1e9;
    ll pt1=0,pt2=0;

    for(int i=0;i<sz(v);i++){
        if(v[i]>maxi){
            maxi=v[i];
            pt1=i;
        }
        if(v[i]<mini){
            mini=v[i];
            pt2=i;
        }
    }
    cout<<pt1+1<<" "<<pt2+1<<endl;

}

int main() {

 ios_base::sync_with_stdio(false);
 cin.tie(NULL); cout.tie(NULL);

  ll Testcases; cin >> Testcases;

  while (Testcases--) {

   execute();

   }

  return 0;
}