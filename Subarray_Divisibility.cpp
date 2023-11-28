//@ Problem Link: https://cses.fi/problemset/task/1662

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

    int n;
    cin >> n;
    ll arr[n];
    for (ll &c : arr)
        cin >> c;

    map<ll, ll> mp;
    ll sum = 0;
    ll cnt = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        ll mod = ((sum % n) + n) % n;
        if (sum % n == 0)
            cnt++;
        cnt += mp[mod];
        mp[mod]++;
    }
    cout << cnt << Endl;
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