#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll x, y, k;
        cin >> x >> y >> k;
        if (x > (y * k) + k)
        {
            cout << k+1 << endl;
        }
        else
        {

            ll chk = ((y * k) + k - x);
            ll chk2 = chk / (x - 1);
            if (chk % (x - 1) != 0)
            {
                chk2 += 1;
            }
            cout << chk2 + 1 + k << endl;
        }
    }
}