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
        vector<pair<ll, ll>> v;
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            v.push_back(make_pair(arr[i], i + 1));
        }
        sort(v.begin(), v.end());
        ll cnt = 0, flg = 0;
        // for (ll i = 0; i < n; i++)
        // {
        //     cout << v[i].first << " " << v[i].second << "\n";
        // }
        for (ll i = 0; i < n && (v[i].first * v[i].first <= 2 * n); i++)
        {
            // if (v[i].first * v[i + 1].first > 2 * n)
            // {
            //     break;
            // }
            for (ll j = i + 1; j < n && (v[i].first * v[j].first <= 2 * n); j++)
            {
                if (v[i].first * v[j].first == (v[i].second + v[j].second))
                {
                    cnt++;
                }
            }
        }
        cout << cnt << endl;
    }
}