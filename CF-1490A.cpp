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
        ll c3 = 0;
        for (ll i = 0; i < n - 1; i++)
        {
            ll c1 = min(arr[i], arr[i + 1]);
            ll c2 = max(arr[i], arr[i + 1]);
            if (c1 * 2 >= c2)
            {
                continue;
            }
            else
            {
                while (c1 < c2)
                {
                    c1 = c1 * 2;
                    c3++;
                }
                c3--;
            }
        }
        cout << c3 << endl;
    }
}
