//@ Problem Link: https://codeforces.com/problemset/problem/1770/A

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

void solve()
{

    ll n, m;
    cin >> n >> m;
    ll a[n], b[m];
    for (auto &c : a)
        cin >> c;
    for (auto &c : b)
        cin >> c;

    sort(a, a + n);
    sort(b, b + m);

    for (int i = 0; i < m; i++)
    {
        a[i % n] = b[i];
    }

    ll sum = 0;
    for (auto c : a)
        sum += c;
    cout << sum << endl;
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