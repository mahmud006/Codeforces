
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll c, d;
        cin >> c >> d;
        if (c == 0 && d == 0)
        {
            cout << 0 << endl;
        }
        else if (abs(c - d) % 2 == 1)
        {
            cout << -1 << endl;
        }
        else if (abs(c - d) == 0)
        {
            cout << 1 << endl;
        }

        else
        {

            ll x = 0, y = 0, cnt = 0;
            while (1)
            {
                x--, y++;
                cnt++;
                if (abs(x - min(c, d)) && abs(y - max(c, d)))
                {
                    break;
                }
            }
            cout << cnt + 1 << endl;
        }
    }
}