//@ Problem Link: https://codeforces.com/problemset/problem/1857/C

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
    int n2 = (n * (n - 1)) / 2;
    int arr[n2];
    for (int i = 0; i < n2; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n2);

    // n--; for (int i = 0; i < n2; i += n, n--) //this line also work;
    for (int i = 0; i < n2; i += n)
    {
        if (n > 1)
        {
            if (n == 1)
                break;
            else
                n--;
        }
        cout << arr[i] << " ";
    }
    // 1000000000
    int last = 1e9;
    cout << last << Endl;
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