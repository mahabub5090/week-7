// //@ Problem Link: https://codeforces.com/problemset/problem/1770/A

// /*
// **************************************************************
// *Bis'Millah Hir Rah'Manir Rahim == start with the name of \n *
// *                    ALLAH Subhana Tayala                    *
// *                Author: Md. Mahabubar Rahman                *
// *               CSE,RPI && Rangpur, Bangladesh               *
// **************************************************************
// */
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

// way-1: complex solving;
void solve()
{

    ll n, m;
    cin >> n >> m;
    ll a[n], b[m];
    for (auto &c : a)
        cin >> c;
    for (auto &c : b)
        cin >> c;

    set<ll> st;
    map<ll, int> mp;

    for (auto c : a)
    {
        st.insert(c);
        mp[c]++;
    }

    for (auto c : b)
    {
        mp[*st.begin()]--;
        if (mp[*st.begin()] == 0)
        {
            st.erase(st.begin());
        }
        st.insert(c);
        mp[c]++;
    }
    ll sum = 0;
    for (auto c : st)
        sum += (c * max(1, mp[c]));
    cout << sum << endl;
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

===== way-2: easy solving; ========== !!!

// /*
// **************************************************************
// *Bis'Millah Hir Rah'Manir Rahim == start with the name of \n *
// *                    ALLAH Subhana Tayala                    *
// *                Author: Md. Mahabubar Rahman                *
// *               CSE,RPI && Rangpur, Bangladesh               *
// **************************************************************
// */
// #include <bits/stdc++.h>
// using namespace std;
// #define Allhamdulillah 0
// #define pb(x) push_back(x)
// #define pp() pop_back()
// #define ll long long int
// #define foi(i, s, e) for (int i = s; i < e; i++)
// #define cn(x) cin >> x
// #define endl '\n'
// #define Endl '\n'
// #define nl cout << '\n'
// #define yes cout << "YES\n"
// #define no cout << "NO\n"

// void solve()
// {

//     ll n, m;
//     cin >> n >> m;
//     ll a[n], b[m];
//     for (auto &c : a)
//         cin >> c;
//     for (auto &c : b)
//         cin >> c;

//     priority_queue<ll, vector<ll>, greater<ll>> pq;
//     for (auto c : a)
//         pq.push(c);
//     for (auto c : b)
//     {
//         pq.pop();
//         pq.push(c);
//     }
//     ll sum = 0;
//     while (!pq.empty())
//     {
//         sum += pq.top();
//         pq.pop();
//     }
//     cout << sum << endl;
// }
// /*mdmahabub55*/
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     int t = 1;
//     cin >> t;
//     // t = 1;

//     while (t--)
//     {
//         solve();
//     }
//     return Allhamdulillah;
// }