#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    string n, m;
    cin >> n >> m;
    vector<ll> f1(26);
    vector<ll> f2(26);
    set<char> st2;
    for (ll i = 0; i < n.size(); i++)
    {
        f1[n[i] - 'a']++;
    }
    for (ll i = 0; i < m.size(); i++)
    {
        f2[m[i] - 'a']++;
        st2.insert(m[i]);
    }
    ll cnt = 0, flg = 0;

    for (auto it = st2.begin(); it !=
                                st2.end();
         ++it)
    {
        if (f1[*it - 'a'] == 0)
        {
            flg++;
        }
        cnt += min(f1[*it - 'a'], f2[*it - 'a']);
    }

    if (cnt == 0 || flg > 0)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << cnt << endl;
    }
}