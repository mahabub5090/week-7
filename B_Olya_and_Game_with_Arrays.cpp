//@ Problem Link: https://codeforces.com/problemset/problem/1859/B
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
    vector<ll> vc, ex;
    while (n--)
    {
        int sz;
        cin >> sz;
        vector<ll> arr(sz);
        for (auto &c : arr)
            cin >> c;
        sort(arr.begin(), arr.end());
        ex.push_back(arr[0]);
        vc.push_back(arr[1]);
        // for (auto val : arr)
        //     cout << val << " ";
        // cout << endl;
    }
    sort(vc.begin(), vc.end());
    sort(ex.begin(), ex.end());
    ll ans = 0;
    for (int i = 1; i < vc.size(); i++)
        ans += vc[i];

    cout << ans + ex[0] << Endl;
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