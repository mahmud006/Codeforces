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
        cout << n / 2 << endl;
        if (n % 2 == 0)
        {
            for (ll i = 0; i < n; i += 2)
            {
                cout << i + 1 << " " << i + 2 << " ";

                cout << 1000001137 << " " << min(arr[i], arr[i + 1]) << endl;
            }
        }
        else
        {
            for (ll i = 1; i < n; i += 2)
            {
                cout << i + 1 << " " << i + 2 << " ";

                cout << 1000001137 << " " << min(arr[i], arr[i + 1]) << endl;
            }
        }
    }
}