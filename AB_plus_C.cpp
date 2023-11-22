//@ Problem Link: https://www.codechef.com/problems/ABPLUSC

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
// Accepted
const int N = 1e6;
void solve()
{

    ll a;
    cin >> a;
    if (a == 1)
    {
        cout << -1 << endl;
    }
    else
    {
        if (a > N)
        {
            bool flag = (a % N == 0 ? false : true);
            cout << (a / N) - (flag ? 0 : 1) << " " << N << " " << (flag ? a % N : N) << endl; //:N;bcz,(a/n)-1 is a multiPly value;
        }
        else
        {
            cout << a - 1 << " " << 1 << " " << 1 << endl;
        }
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