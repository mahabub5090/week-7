//@ Problem Link: https://codeforces.com/contest/1900/problem/C

/*
**************************************************************
*Bis'Millah Hir Rah'Manir Rahim == start with the name of \n *
*                    ALLAH Subhana Tayala                    *
*                Author: Md. Mahabubar Rahman                *
*               CSE,RPI && Rangpur, Bangladesh               *
**************************************************************
*/
#include <bits/stdc++.h>
using namespace std;
#define Allhamdulillah 0
#define pb(x) push_back(x)
#define pp() pop_back()
#define ll long long int
#define foi(i, s, e) for (int i = s; i < e; i++)
#define cn(x) cin >> x
#define endl '\n'
#define Endl '\n'
#define nl cout << '\n'
#define yes cout << "YES\n"
#define no cout << "NO\n"

const int N = 1e5;
pair<int, int> adj[N];
int n;
string s;

int dfs(int a)
{
    if (adj[a].first == 0 && adj[a].second == 0)
    {
        // cout << "worked";
        return 0;
    }
    int ans = 1e5;
    if (adj[a].first != 0)
    {
        ans = min(ans, (s[a - 1] == 'L' ? dfs(adj[a].first) : dfs(adj[a].first) + 1));
    }
    if (adj[a].second != 0)
    {
        ans = min(ans, (s[a - 1] == 'R' ? dfs(adj[a].second) : dfs(adj[a].second) + 1));
    }
    return ans;
}
void solve()
{
    // int n;
    cin >> n >> s;
    for (int i = 1; i <= n; i++)
    {
        int u, v;
        cin >> u >> v;
        // cout << u << v << endl;
        adj[i].first = u;
        adj[i].second = v;
    }
    cout << dfs(1) << "\n";
}
/*mdmahabub55*/
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t = 1;
    cin >> t;
    // t = 1;

    while (t--)
    {
        solve();
    }
    return Allhamdulillah;
}