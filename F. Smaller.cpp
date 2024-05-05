#include <bits/stdc++.h>
using namespace std;

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

set<ll> printDivisors(int n)
{
    set<ll> v;
    // Note that this loop runs till square root
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            // If divisors are equal, print only one
            if (n / i == i)
                v.insert(i + 1);

            else // Otherwise print both
            {
                v.insert(i + 1);
                v.insert((n / i) + 1);
            }
        }
    }
    return v;
}

void solve()
{
    ll n, x;
    cin >> n >> x;
    set<ll> st, st1, st3;

    ll t1 = (n - x) / 2;
    ll t2 = (n + x - 2) / 2;
    if ((n - x) % 2 == 0)
        st = printDivisors(t1);
    if ((n + x - 2) % 2 == 0)
        st1 = printDivisors(t2);

    for (auto it : st1)
        st.insert(it);
    for (auto it : st)
    {
        // cout << it << endl;
        if (it >= x)
            st3.insert(it);
    }

    cout << sz(st3) << endl;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll $;
    cin >> $;

    while ($--)
    {

        solve();
    }

    return 0;
}