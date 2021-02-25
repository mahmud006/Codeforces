#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll arr[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        ll chk, c1, flg = 0;
        // for (ll i = 0; i < n; i++)
        // {
        //     c1 = arr[i] - i;
        //     //cout << "c1 " << c1 << endl;
        //     if (c1 > -1)
        //     {
        //         chk += c1;
        //     }
        //     else
        //     {
        //         chk = chk - (c1 * -1);
        //         if (chk < 0)
        //         {
        //             flg++;
        //             break;
        //         }
        //     }
        //     //cout << "ch " << chk << endl;
        // }
        ll sum = 0;
        for (ll i = 0; i < n; i++)
        {
            chk = (i + 1) * i / 2;
            sum += arr[i];
            if (sum >= chk)
            {
                continue;
            }
            else
            {
                flg++;
                break;
            }
        }
        if (flg > 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}