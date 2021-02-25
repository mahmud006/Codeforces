#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll fn(ll n)
{
    ll x = n;
    while (n > 0)
    {
        ll chk = n % 10;
        n = n / 10;
        if (chk != 0)
        {
            if (x % chk != 0)
            {
                return 0;
            }
        }
    }
    return 1;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        for (ll i = n;; i++)
        {
            if (fn(i) == 1)
            {
                cout << i << endl;
                break;
            }
        }
    }
}