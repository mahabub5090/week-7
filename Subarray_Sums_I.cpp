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

    ll i = 0, j = 0, sum = 0, cnt = 0;

    while (i != n)
    {
        if (j < n)
        {
            sum += arr[j];
        }

        if (sum == ts)
        {
            cnt++;
            sum -= arr[i];
            i++;
        }

        if (sum > ts)
        {
            while (sum >= ts)
            {
                sum -= arr[i];
                i++;
                if (sum == ts)
                {
                    cnt++;
                }
            }
        }
        if (j >= n)
        {
            i++;
        }
        j++;
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