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
        ll m = 2 * n;
        ll arr[m];
        for (ll i = 0; i < m; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + m);
        ll cnt = 0;
        for (ll i = 0, j = m - 1; i < m, j >= 0; i++, j--)
        {
            cout << arr[i] << " ";
            cnt++;
            if (cnt == m)
                break;
            cout << arr[j] << " ";
            cnt++;
            if (cnt == m)
                break;
        }
        cout << endl;
    }
}