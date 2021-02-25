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
        scanf("%lld", &n);
        ll mn = 1000000000;

        if (n == 1)
        {
            cout << 0 << endl;
        }
        else
        {
            for (ll x = 2; x*x <= n; x++)
            {
                ll chk = ((x - 1) + (ceil((double)n / (double)x) - 1));
                if (chk < mn)
                {
                    mn = chk;
                }
                
            }
            cout << mn << endl;
        }
    }
}