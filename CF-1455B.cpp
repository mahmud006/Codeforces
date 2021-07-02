#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin >> n;
    while (n--)
    {
        ll x;
        cin >> x;
        ll chk = 0, cnt = 0, c1, c2;
        for (ll i = 0;; i++)
        {
            chk = chk + (i + 1);
            cnt++;
            if (chk == x)
            {
                break;
            }
            else if (chk > x)
            {
                if (chk - 1 == x)
                {
                    cnt++;
                    break;
                }
                else
                {
                    cnt += 0;
                    break;
                }
            }
        }
        cout << cnt << endl;
    }
}