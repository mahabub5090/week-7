//@ Problem Link: https://codeforces.com/problemset/problem/805/B

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
    if (n < 4)
    {
        if (n == 1)
            cout << "a" << endl;
        if (n == 2)
            cout << "ab" << endl;
        if (n == 3)
            cout << "abb" << endl;
        return;
    }
    string s = "";
    int lp = n / 4;
    for (int i = 1; i <= lp; i++)
    {
        s += "aabb";
    }
    if (n % 4)
    {
        if (n % 4 == 1)
            s += "a";
        else if (n % 4 == 2)
            s += "aa";
        else
            s += "aab";
    }
    cout << s << endl;
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