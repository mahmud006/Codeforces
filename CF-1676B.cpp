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
        ll mn = INT_MAX;
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            mn = min(arr[i], mn);
        }
        ll sum = 0;
        for (ll i = 0; i < n; i++)
        {
            sum += (arr[i] - mn);
        }
        cout << sum << endl;
    }
}