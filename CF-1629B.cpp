#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll l, r, k;
        cin >> l >> r >> k;

        if (r - l == 0)
        {
            if (r == 1)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
        else
        {
            ll cnt = 0;

            if (l % 2 == 0 && r % 2 == 0)
            {
                cnt = (r - l) / 2;
            }
            else
            {
                cnt = ((r - l) / 2) + 1;
            }

            if (cnt <= k)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}