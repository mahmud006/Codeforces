#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define sz 26
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

        ll cnt = 0;
        while (!is_sorted(arr, arr + n))
        {
            for (ll i = cnt % 2; i < n - 1; i += 2)
            {
                if (arr[i] > arr[i + 1])
                {
                    swap(arr[i], arr[i + 1]);
                }
            }

            cnt++;
        }
        cout << cnt << endl;
    }
}
