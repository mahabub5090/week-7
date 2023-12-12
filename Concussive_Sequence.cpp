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

void solve()
{

    int n;
    cin >> n;
    int arr[n];
    for (auto &val : arr)
        cin >> val;
    int mid = n / 2;
    sort(arr, arr + n);
    vector<int> a, b;
    for (auto i = 0; i < mid; i++)
        a.pb(arr[i]);
    for (auto i = mid; i < n; i++)
        b.pb(arr[i]);
    vector<int> ans(n);
    ll j = 0;
    for (int i = 0; i < n; i += 2, j++)
        ans[i] = a[j];
    j = 0;
    for (int i = 1; i < n; i += 2, j++)
        ans[i] = b[j];
    for (auto val : ans)
        cout << val << " ";
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