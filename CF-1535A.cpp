#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        ll mx1 = max(a, b);
        ll mn1 = min(a, b);
        ll mx2 = max(c, d);
        ll mn2 = min(c, d);
        if (mx1 < mn2 || mx2 < mn1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}
