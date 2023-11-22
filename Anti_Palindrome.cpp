//@ Problem Link: https://www.codechef.com/problems/ANTIPALINDR

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
#define Allhamdulillah 1 ^ 1
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
#define maping(ky, vlu, nam) map<ky, vlu> nam

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    maping(char, int, mp);
    for (char c : s)
        mp[c]++;
    int cnt = 0;
    bool isP = true;
    if (n % 2 == 1)
    {
        bool fo = 0;
        for (auto val : mp)
        {
            if (val.second % 2 != 0)
            {
                if (!fo)
                    fo |= true;
                else
                {
                    isP &= false;
                }
            }
        }
    }
    else
    {
        for (auto val : mp)
        {
            if (val.second % 2 != 0)
            {
                isP &= false;
            }
        }
    }

    if (isP)
    {
        if (mp.size() == 1)
        {
            if (n % 2 == 0)
                cout << 1 << endl;
            else
            {
                cout << 2 << endl;
            }
        }
        else
        {
            cout << 1 << endl;
        }
    }
    else
        cout << 0 << endl;
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