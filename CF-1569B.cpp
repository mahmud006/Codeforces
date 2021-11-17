#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string st;
        cin >> st;
        vector<int> type2;
        for (ll i = 0; i < n; i++)
        {
            if (st[i] == '2')
            {
                type2.push_back(i);
            }
        }
        if (type2.size() == 1 || type2.size() == 2)
        {
            cout << "NO" << endl;
        }
        else
        {
            vector<string> t(n, string(n, '='));
            for (ll i = 0; i < n; i++)
                t[i][i] = 'X';
            for (ll i = 0; i < type2.size(); i++)
            {
                ll a = type2[i], b = type2[(i + 1) % type2.size()];
                t[a][b] = '+';
                t[b][a] = '-';
            }
            cout << "YES" << endl;
            for (ll i = 0; i < n; i++)
            {
                cout << t[i] << endl;
            }
        }
    }
}