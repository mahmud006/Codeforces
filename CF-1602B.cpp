#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll fn(ll arr[], ll n, ll x, ll k)
{
    ll y = 1, z = 0;
    ll chk = log(n);
    while (y <= chk)
    {
        unordered_map<ll, ll> mp[chk];
        for (ll i = 0; i < n; i++)
        {
            mp[z][arr[i]]++;
        }
        for (ll i = 0; i < n; i++)
        {
            arr[i] = mp[z][arr[i]];
        }
        if (y == k)
        {
            return arr[x - 1];
        }
        // for (ll i = 0; i < n; i++)
        // {
        //     cout << arr[i] << " ";
        // }
        // cout << endl;
        y++;
        z++;
    }
    return arr[x - 1];
}
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

        ll q;
        cin >> q;
        while (q--)
        {
            ll x, k;
            cin >> x >> k;
            if (k == 0)
            {
                cout << arr[x - 1] << endl;
            }
            else
            {
                cout << fn(arr, n, x, k) << endl;
            }
        }
    }
}