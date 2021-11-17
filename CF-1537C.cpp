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
        sort(arr, arr + n);
        ll mn = INT_MAX, mx = 0;
        ll c1, c2, c3;
        for (ll i = 0; i < n - 1; i++)
        {
            ll chk = arr[i + 1] - arr[i];
            if (chk < mn)
            {
                mn = chk;
                c1 = i, c2 = i + 1;
            }
            if (arr[i] > mx)
            {
                mx = arr[i];
                c3 = i;
            }
        }
        if (n == 2)
        {
            for (ll i = 0; i < n; i++)
            {
                cout << arr[i] << " ";
            }
        }
        else
        {

            for (ll i = c2; i < n; i++)
            {
                cout << arr[i] << " ";
            }
            for (ll i = 0; i <= c1; i++)
            {
                cout << arr[i] << " ";
            }
        }
        cout << endl;
    }
}