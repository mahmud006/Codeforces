#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    //pre();
    while (t--)
    {
        ll k, x;
        cin >> k >> x;
        ll c1, c2;
        if (k % 2 == 0)
        {
            c1 = k / 2;
            c2 = (k * c1) + c1;
        }
        else
        {
            c1 = (k + 1) / 2;
            c2 = k * c1;
        }
        //cout << c2 << endl;
        if (k == 1 || x == 1)
            cout << 1 << endl;

        else if (x > (k * k))
        {
            cout << (k * 2) - 1 << endl;
        }
        else
        {

            if (x <= c2)
            {
                while (1)
                {
                    //cout << c2 << endl;
                    if (c2 >= x && c2 - k < x)
                    {
                        cout << k << endl;
                        break;
                    }
                    c2 -= k;
                    k--;
                }
            }
            else
            {
                while (1)
                {
                    ll k1 = k;
                    if (c2 <= x && c2 + k > x)
                    {
                        cout << k1 + 1 << endl;
                        break;
                    }
                    c2 += k;
                    k--;
                    k1++;
                }
            }
        }
    }
}
