#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll x, n;
        cin >> x >> n;
        ll res;
        if (n % 2 == 0)
        {
            ll chk;
            if (x % 2 == 0)
            {
                chk = n / 2;
                if (chk % 2 == 0)
                {
                    res = x;
                }
                else
                {
                    res = x + 1;
                }
            }
            else
            {
                chk = n / 2;
                if (chk % 2 == 0)
                {
                    res = x;
                }
                else
                {
                    res = x - 1;
                }
            }
        }
        else
        {
            ll chk2 = 0;
            if (x % 2 == 0)
            {
                chk2 = (n + 1) / 2;
                if (chk2 % 2 == 0)
                {
                    res = x + n + 1;
                }
                else
                {
                    res = x - n;
                }
            }
            else
            {
                chk2 = (n + 1) / 2;
                if (chk2 % 2 == 0)
                {
                    res = x - (n + 1);
                }
                else
                {
                    res = x + n;
                }
            }
        }
        cout << res << endl;
    }
}