#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll p, a, b, c;
        cin >> p >> a >> b >> c;
        ll a1, b1, c1;
        a1 = p / a;
        b1 = p / b;
        c1 = p / c;

        ll ch1, ch2, ch3;
        if (a1 * a >= p)
        {
            ch1 = a1 * a - p;
        }
        else
        {
            ch1 = ((a1 + 1) * a) - p;
        }

        //cout << "ch : " << ch1 << endl;
        if (b1 * b >= p)
        {
            ch2 = b1 * b - p;
        }
        else
        {
            ch2 = (b1 + 1) * b - p;
        }

        if (c1 * c >= p)
        {
            ch3 = c1 * c - p;
        }
        else
        {
            ch3 = (c1 + 1) * c - p;
        }
        // cout << ch1 << endl;
        // cout << ch2 << endl;
        // cout << ch3 << endl;

        cout << min(min(ch1, ch2), ch3) << endl;
    }
}
