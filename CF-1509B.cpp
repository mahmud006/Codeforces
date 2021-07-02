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
        string s;
        cin >> s;
        ll f2 = 0;
        for (ll i = 0, k = n - 1; i < n, k >= 0; i++, k--)
        {
            ll f1 = 0;
            if (s[i] == 'T')
            {
                for (ll j = i + 1; j < n; j++)
                {
                    if (s[j] == 'M')
                    {
                        f1++;
                        break;
                    }
                }
                if (f1 == 0)
                {
                    f2++;
                }
            }
        }
    }
}
