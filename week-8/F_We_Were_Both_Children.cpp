//@ Problem Link: https://codeforces.com/problemset/problem/1850/F

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
    ll arr[n + 1];
    map<ll, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mp[arr[i]]++;
    }
    sort(arr, arr + n);
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        i++;
        int cnt = 0;
        for (int j = 1; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                cnt += mp[j];
                if (j * j != i)
                {
                    cnt += mp[i / j];
                }
            }
        }
        ans.pb(cnt);
        i--;
    }
    sort(ans.begin(), ans.end());
    cout << ans[ans.size() - 1] << endl;
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