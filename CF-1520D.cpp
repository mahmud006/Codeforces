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
        ll arr[n], brr[n];
        unordered_map<ll, ll> mp;
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            brr[i] = arr[i] - (i + 1);
            mp[brr[i]]++;
        }
        ll cnt = 0;
        for (auto x : mp)
        {
            if (x.second > 1)
            {
                cnt += (x.second * (x.second - 1) / 2);
            }
        }
        cout << cnt << endl;
    }
}