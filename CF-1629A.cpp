#include <bits/stdc++.h>
using namespace std;
#define ll long long
void pairsort(ll a[], ll b[], ll n)
{
    pair<ll, ll> pairt[n];
    for (ll i = 0; i < n; i++)
    {
        pairt[i].first = a[i];
        pairt[i].second = b[i];
    }
    sort(pairt, pairt + n);
    for (ll i = 0; i < n; i++)
    {
        a[i] = pairt[i].first;
        b[i] = pairt[i].second;
    }
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll arr[n], brr[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (ll i = 0; i < n; i++)
        {
            cin >> brr[i];
        }
        pairsort(arr, brr, n);
        for (ll i = 0; i < n; i++)
        {
            if (arr[i] <= k)
            {
                k += brr[i];
            }
        }
        cout << k << endl;
    }
}