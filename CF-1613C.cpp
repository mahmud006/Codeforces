#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, h;
        cin >> n >> h;
        ll arr[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        // binary search
        ll l = 1, r = 1e18;
        while (l <= r)
        {
            ll m = (l + r) / 2;
            ll sum = m;
            for (ll i = 0; i < n - 1; i++)
            {
                sum += min(m, arr[i + 1] - arr[i]);
            }
            if (sum < h)
            {
                l = m + 1;
            }
            else
            {
                r = m - 1;
            }
            // cout << "m " << m << endl;
            // cout << "s " << sum << endl;
        }
        cout << r + 1 << endl;
    }
}