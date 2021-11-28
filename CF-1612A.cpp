#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll x, y;
        cin >> x >> y;
        ll mx = max(x, y);
        ll mn = min(x, y);
        ll chk = mx - mn;
        ll chk1 = chk / 2;
        if (chk % 2 == 0)
        {
            if (x > y)
            {
                cout << chk1 << " " << mn << endl;
            }
            else
            {
                cout << mn << " " << chk1 << endl;
            }
        }
        else
        {
            cout << -1 << " " << -1 << endl;
        }
    }
}
