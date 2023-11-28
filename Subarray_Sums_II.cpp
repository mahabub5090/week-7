//@ Problem Link: https://cses.fi/problemset/task/1661

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

    ll n, ts;
    cin >> n >> ts;
    ll arr[n];
    for (ll &val : arr)
        cin >> val;
    // for (int i = 1; i < n; i++)
    //     arr[i] += arr[i - 1];
    ll cnt = 0;
    ll sum = 0;
    map<ll, ll> mp;
    mp[0] = 1;
    for (int val : arr)
    {
        sum += val;
        cnt += mp[sum - ts];
        mp[sum]++;
    }
    cout << cnt << endl;
}
/*mdmahabub55*/
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t = 1;
    // cin >> t;
    // t = 1;

    while (t--)
    {
        solve();
    }
    return Allhamdulillah;
}