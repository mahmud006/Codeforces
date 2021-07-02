#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll mod = 10E9 + 7;
ll fact(ll n)
{
    if (n <= 1)
        return 1;
    return (n * fact(n - 1) % mod) % mod;
}

ll nPr(ll n, ll r)
{
    return (fact(n) % mod / fact(n - r) % mod) % mod;
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
        ll mn = INT_MAX;
        unordered_map<int, int> cnt;
        //ll cnt[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            cnt[arr[i]]++;
            if (arr[i] < mn)
            {
                mn = arr[i];
            }
        }
        if (cnt[mn] >= 2)
        {
            cout << (fact(n - 2) % mod * (cnt[mn] % mod * (cnt[mn] - 1) % mod) % mod) % mod << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
}