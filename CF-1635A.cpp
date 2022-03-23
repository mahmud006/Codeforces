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
        ll sum;
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sum = arr[0];
        for (ll i = 1; i < n; i++)
        {
            sum = sum | arr[i];
            // cout << sum << endl;
        }
        cout << sum << endl;
    }
}