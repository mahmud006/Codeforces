#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        ll chk = abs(a - b);
        ll chk1 = 2 * chk;
        if (a <= chk1 && b <= chk1 && c <= chk1)
        {
            ll c1 = c + chk;
            ll c2 = c - chk;

            if (c1 <= chk1)
            {
                cout << c1 << endl;
            }

            else if (c2 <= chk1)
            {
                cout << c2 << endl;
            }

            else
            {
                cout << -1 << endl;
            }
        }
        else
        {
            cout << -1 << endl;
        }
    }
}