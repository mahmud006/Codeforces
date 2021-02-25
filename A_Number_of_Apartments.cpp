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
        ll c3, c5, c7;
        c3 = n % 3;
        c5 = n % 5;
        c7 = n % 7;
        ll chk, chk1, flg = 0;
        if (n < 3)
        {
            cout << -1 << endl;
        }
        else
        {

            if (c3 == 0)
            {
                flg++;
                cout << n / 3 << " " << 0 << " " << 0 << endl;
            }
            else if (c5 == 0)
            {
                flg++;
                cout << 0 << " " << n/5 << " " << 0 << endl;
            }
            else if (c7 == 0)
            {
                flg++;
                cout << 0 << " " << 0 << " " << n/7 << endl;
            }
            else
            {
                chk = ((n / 3) - 1);
                while (1)
                {
                    if (chk == 0)
                    {
                        break;
                    }
                    chk1 = chk * 3;
                    if (chk1 + 5 == n)
                    {
                        cout << chk << " " << 1 << " " << 0 << endl;
                        flg++;
                        break;
                    }
                    if (chk1 + 7 == n)
                    {
                        cout << chk << " " << 0 << " " << 1 << endl;
                        flg++;
                        break;
                    }
                    chk--;
                }
            }
            if (flg == 0)
            {
                cout << -1 << endl;
            }
        }
    }
}