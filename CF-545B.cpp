#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string s, t;
    cin >> s >> t;
    ll cnt = 0;
    for (ll i = 0; i < s.size(); i++)
    {
        if (s[i] != t[i])
        {
            cnt++;
        }
    }
    if (s.size() % 2 != 0)
    {
        cout << "impossible" << endl;
    }
    else
    {
        if (cnt % 2 == 0)
        {
            reverse(s.begin(), s.end());
            cout << s << endl;
            // for (ll i = 0; i < s.size() / 2; i++)
            // {
            //     cout << s[i];
            // }
            // for (ll i = s.size() / 2; i < s.size(); i++)
            // {
            //     cout << t[i];
            // }
        }
        else
        {
            cout << "impossible" << endl;
        }
    }
    cout << endl;
}