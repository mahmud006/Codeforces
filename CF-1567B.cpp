
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        // if (b == 1)
        // {
        //     if (a == 2)
        //     {
        //         cout << 2 << endl;
        //     }
        //     else
        //     {

        //         cout << 2 + a << endl;
        //     }
        // }
        // else
        // {
        //     cout << a + 1 << endl;
        // }
        // ll chk = 0;
        // for (ll i = 0; i < a; i++)
        // {
        //     chk = chk ^ i;
        // }
        // cout << chk << endl;
        if (b == 0)
        {
            if (a % 4 == 0)
            {
                cout << a << endl;
            }
            else
            {
                cout << a + 1 << endl;
            }
        }
        else if (b == 1)
        {
            if (a % 2 == 0 && a % 4 != 0)
            {
                cout << a << endl;
            }
            else
            {
                ll chk1 = (a - 1) ^ b;
                if (chk1 == a)
                {
                    cout << a + 2 << endl;
                }
                else
                {

                    cout << a + 1 << endl;
                }
            }
        }
        else
        {
            ll chk2 = (a - 1) ^ b;
            if (chk2 == a)
            {
                cout << a + 2 << endl;
            }
            else
            {

                cout << a + 1 << endl;
            }
        }
    }
}