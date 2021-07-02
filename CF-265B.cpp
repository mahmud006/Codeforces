#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;
    cin >> n;
    ll h[n];
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> h[i];
    }
    if (n == 1)
    {
        cout << ((h[0] * 2) + 1) - h[0] << endl;
    }
    else
    {

        for (ll i = 0; i < n; i++)
        {
            ll chk = (h[i] * 2) + 1;

            if (i == n - 1)
            {
                chk -= min(h[i], h[i - 1]);
                chk -= h[i];
                sum += chk;
                //cout << chk << endl;
            }
            else
            {
                if (i > 0)
                {
                    chk -= min(h[i], h[i - 1]);
                }
                chk -= min(h[i], h[i + 1]);
                sum += chk;
                //cout << chk << endl;
            }
        }
        cout << sum + (n - 1) << endl;
    }
}