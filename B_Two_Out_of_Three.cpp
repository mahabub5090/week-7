//@ Problem Link: https://codeforces.com/problemset/problem/1894/B

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

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    map<int, int> mp;
    for (auto val : arr)
        mp[val]++;
    int cnt = 0;
    for (auto val : mp)
        val.second >= 2 ? cnt += 1 : cnt += 0;
    if (cnt < 2)
        cout << -1 << Endl;
    else
    {
        bool one = false, two = false;
        vector<int> ans(n, 1);
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (mp[arr[i]] >= 2)
            {
                if (!one)
                {
                    one = true;
                    ans[i] = 2;
                    mp[arr[i]] = 0;
                }
                else
                {
                    two = true;
                    ans[i] = 3;
                    mp[arr[i]] = 0;
                }
            }
        }

        for (auto val : ans)
            cout << val << " ";
        cout << endl;
    }
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