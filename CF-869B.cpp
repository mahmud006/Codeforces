#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll a, b;
    cin >> a >> b;
    if (a == 0 && b == 0)
    {
        cout << 1 << endl;
    }
    else if ((b == 0 && a != 0) || (a % 10 == 0 && b % 10 == 0 && a != b))
    {
        cout << 0 << endl;
    }

    else
    {
        string s1 = to_string(a), s2 = to_string(b);
        ll l1 = s1.size();
        ll l2 = s2.size();
        char a1 = s1[l1 - 1];
        char b1 = s2[l2 - 1];

        // cout << a1 << endl;
        // cout << b1 << endl;
        ll c1 = 1, c2 = 1;
        ll x1 = a1 - '0';
        ll x2 = b1 - '0';
        for (ll i = 1; i <= x1; i++)
        {
            c1 = c1 * i;
        }
        for (ll i = 1; i <= x2; i++)
        {
            c2 = c2 * i;
        }
        // cout << c1 << endl;
        // cout << c2 << endl;
        ll res = c2 / c1;
        string st = to_string(res);
        cout << st[st.size() - 1] << endl;
    }
}