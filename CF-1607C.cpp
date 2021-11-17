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
            if (arr[i] < mn)
            {
                mn = arr[i];
            }
        }
        sort(arr, arr + n);
        // for (ll i = 0; i < n; i++)
        // {
        //     cout << arr[i] << " ";
        // }
        if (n <= 2)
        {
            if (n == 2)
            {
                cout << max(arr[0], abs(arr[0] - arr[1])) << endl;
            }
            else
            {
                cout << arr[0] << endl;
            }
        }
        else
        {
            ll mx = mn;
            for (ll i = 0; i < n - 1; i++)
            {
                ll chk = abs(arr[i] - arr[i + 1]);
                if (chk > mx)
                {
                    mx = chk;
                }
            }
            cout << mx << endl;
        }
    }
}