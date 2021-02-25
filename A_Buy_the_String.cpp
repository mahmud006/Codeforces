#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, c0, c1, h;
        cin >> n >> c0 >> c1 >> h;
        string s;
        cin >> s;
        ll cnt1 = 0, cnt2 = 0;
        for (ll i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
            {
                cnt1++;
            }
            else
            {
                cnt2++;
            }
        }
        //cout << cnt2 <<endl;
        ll sum = 0;
        ll chk1 = cnt1 * c0;
        ll chk2 = cnt2 * c1;
        //cout << "ch" <<chk1 <<endl;
        ll chk3;
        //cout << chk1 <<endl;
        //cout << chk2 <<endl;
        if (chk1 < chk2)
        {
            sum += chk1;
            chk3 = min((cnt2 * h) + (cnt2 * c0), chk2);
            sum += chk3;
        }
        else if (chk2 < chk1)
        {
            sum += chk2;
            chk3 = min((cnt1 * h) + (cnt1 * c1), chk1);
            sum += chk3;
        }
        else
        {
            if (c0 > c1 && h < c0)
            {
                ll ch1 = (cnt1 * h) + (cnt1 * c1);
                sum += min(chk1, ch1);
            }
            else if (c1 > c0 && h < c1)
            {
                ll ch2 = (cnt2 * h) + (cnt2 * c0);
                sum += min(chk2, ch2);
            }

            else
            {

                sum += cnt1 *c0 + cnt2 *c1 ;
            }
        }

        cout << sum << endl;
    }
}