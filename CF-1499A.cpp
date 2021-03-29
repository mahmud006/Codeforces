#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k1, k2, w, b;
        cin >> n >> k1 >> k2 >> w >> b;

        ll chk = 2 * n;
        ll wh = k1 + k2;
        ll bl = chk - wh;

        ll f1 = 0;
        if (w * 2 <= wh && b * 2 <= bl)
        {
            f1++;
        }

        if (f1 > 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}