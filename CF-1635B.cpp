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
        ll cnt = 0;
        for (ll i = 1; i < n - 1; i++)
        {
            if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
            {

                if (arr[i + 2] > arr[i] && i < n - 2)
                {
                    arr[i + 1] = arr[i + 2];
                }
                else
                {
                    arr[i + 1] = arr[i];
                }

                cnt++;
            }
        }
        cout << cnt << endl;
        for (ll i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}