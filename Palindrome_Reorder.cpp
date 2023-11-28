//@ Problem Link: https://cses.fi/problemset/task/1755

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

// Accepted;

void solve()
{

    string s;
    cin >> s;
    int n = s.size();
    map<char, int> mp;
    for (char c : s)
        mp[c]++;
    ll cnt = 0;
    for (auto val : mp)
        val.second % 2 == 1 ? cnt++ : cnt += 0;

    if ((n % 2 == 0 && cnt != 0) || (n % 2 == 1 && cnt != 1))
    {
        cout << "NO SOLUTION\n";
        return;
    }
    vector<pair<char, int>> vc(mp.begin(), mp.end());
    sort(vc.begin(), vc.end(), [](pair<char, int> a, pair<char, int> b)
         { return a.second > b.second; });

    string ans = s;
    int i = 0, j = n - 1;

    for (auto val : vc)
    {
        while (val.second != 0)
        {

            if (val.second == 1)
            {
                ans[n / 2] = val.first;
                val.second = val.second - 1;
                continue;
            }

            ans[i] = val.first;
            ans[j] = val.first;
            val.second -= 2;
            i++;
            j--;
        }
    }

    cout << ans << endl;
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