#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        vector<int> v[2];
        for (ll i = 0; i < s.size() - 1; i++)
        {
            if (s[i] == s[i + 1])
            {
                v[s[i] - '0'].push_back(i);
            }
        }
        if (v[0].empty() || v[1].empty())
        {
            cout << "YES" << endl;
            continue;
        }
        ll ch1 = v[0].back();
        ll ch2 = v[1].front();
        if (ch1 < ch2)
        {
            cout << "YES" << endl;
            continue;
        }
        cout << "NO" << endl;
    }
}