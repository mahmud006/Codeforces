#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin >> n;
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr+n);
    ll q;
    cin >> q;
    ll m[q];
    for (ll i = 0; i < q; i++)
    {
        cin >> m[i];
        auto x = upper_bound(arr, arr+n, m[i]);
        ll indx = distance(arr, x);
        cout << indx <<endl;
    }
}