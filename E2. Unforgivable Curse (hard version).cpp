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

bool dfs(ll node, ll parent, vector<pair<ll, ll>> adj[], int vis[], int pathvis[], vector<ll> &cyclePath, ll &minWeight)
{
    vis[node] = 1;
    pathvis[node] = 1;
    cyclePath.push_back(node); // Add the current node to the cycle path

    for (auto it : adj[node])
    {
        ll child = it.first;
        ll weight = it.second;

        if (!vis[child])
        {
            if (dfs(child, node, adj, vis, pathvis, cyclePath, minWeight) == true)
                return true;
        }
        else if (pathvis[child])
        {
            // If the current node is already visited in the current DFS traversal,
            // it means we found a cycle. Now, we'll backtrack and find the edge
            // with the lowest weight in the cycle.
            ll temp = node;
            ll min_weight = INT_MAX;
            while (temp != child)
            {
                if (adj[temp][0].second < min_weight) // We know there is only one edge between two nodes in this problem
                    min_weight = adj[temp][0].second;
                temp = adj[temp][0].first;
            }
            if (weight < min_weight)
            {
                min_weight = weight;
            }
            if (min_weight < minWeight)
            {
                minWeight = min_weight;
            }

            // Store the cycle path
            vector<ll>::iterator it = find(cyclePath.begin(), cyclePath.end(), child);
            while (it != cyclePath.end())
            {
                cyclePath.erase(it, cyclePath.end());
                it = find(cyclePath.begin(), cyclePath.end(), child);
            }
            cyclePath.push_back(node); // Add the starting node of the cycle again to complete the cycle path

            return true;
        }
    }
    pathvis[node] = 0;
    cyclePath.pop_back(); // Remove the current node from the cycle path as we backtrack
    return false;
}

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<pair<ll, ll>> adj[n + 1];

    for (int i = 0; i < m; i++)
    {
        ll u, v, w;
        cin >> u >> v >> w;
        adj[u].pb({v, w});
    }
    int vis[n + 1] = {0};
    int pathvis[n + 1] = {0};
    vector<ll> ans;
    ll j = 1e9;
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            vector<ll> patht;
            ll mini = 1e9;
            if (dfs(i, -1, adj, vis, pathvis, patht, mini) == true)
            {
                if (mini < j)
                {
                    for(auto it:patht){
                        ans.pb(it);
                    }
                    j = mini;
                }
            }
        }
    }
    cout << j << endl;
    cout << sz(ans) << endl;
    for (auto it : ans)
    {
        cout << it << " ";
    }
    cout << endl;
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