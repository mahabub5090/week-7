//@ Problem Link: https://www.codechef.com/problems/CONCUSSIVE?tab=submissions

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

bool check(vector<int> vc)
{
    for (int i = 0; i < vc.size() - 1; i++)
    {
        if (vc[i] == vc[i + 1])
            return false;
    }
    return true;
}
void solve()
{

    int n;
    cin >> n;
    int arr[n];
    for (auto &val : arr)
    {
        cin >> val;
    }
    sort(arr, arr + n);
    vector<int> ans1(n), ans2(n);

    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (j >= n)
            j = 1;
        ans1[j] = arr[i];
        j += 2;
    }
    j = 1;
    for (int i = 0; i < n; i++)
    {
        if (j >= n)
            j = 0;
        ans2[j] = arr[i];
        j += 2;
    }
    // for (auto val : ans1)
    //     cout << val << " ";
    // cout << endl;
    // for (auto val : ans2)
    //     cout << val << " ";
    // cout << endl;
    // return;

    if (!check(ans1) && !check(ans2))
        cout << -1;
    else if (check(ans1))
    {
        for (auto val : ans1)
            cout << val << " ";
    }
    else
        for (auto val : ans2)
            cout
                << val << " ";

    cout << endl;
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