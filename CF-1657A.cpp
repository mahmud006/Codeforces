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
        ll chk1 = (x * x) + (y * y);
        ll chk2 = sqrt(chk1);
        if (x == 0 && y == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            if (chk2 * chk2 == chk1)
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 2 << endl;
            }
        }
    }
}