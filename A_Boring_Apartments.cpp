#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll x;
        cin >> x;
        ll chk = 1, cnt = 0, c = 0;
        for (ll i = 1; i <= 9; i++)
        {
            chk = i;
            for (ll j = 1; j <= 4; j++)
            {

                cnt+=j;
                if (chk == x)
                {
                    c++;
                    break;
                }
                chk = (chk * 10) + i;
                //cout << chk <<endl;
            }
            if (c > 0)
            {
                break;
            }
            //chk = 1;
        }
        cout << cnt << endl;
    }
}