#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll k;
        cin >> k;
        ll chk = sqrt(k);
        //cout << chk << endl;
        ll chk1 = chk * chk;
        //cout << chk1 << endl;
        ll chk2;
        if (chk * chk == k)
        {
            chk2 = chk1;
        }
        else
        {
            chk = chk + 1;
            chk2 = chk * chk;
        }

        //cout << chk << endl;
        ll c1 = 0, f1 = 0, i;
        for (i = chk2;; i--)
        {
            c1++;

            if (i == k)
            {
                cout << chk << " " << c1 << endl;
                f1++;
            }

            if (c1 == chk)
            {
                break;
            }
        }
        //cout << i << endl;
        if (f1 == 0)
        {
            ll j, c2 = 0;
            for (j = i - 1;; j--)
            {
                c2++;

                if (j == k)
                {
                    cout << chk - c2 << " " << c1 << endl;
                }
                if (c2 == chk)
                {
                    break;
                }
                //cout << j << endl;
            }
        }

        //cout << chk2 << endl;
    }
}