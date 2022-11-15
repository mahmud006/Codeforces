#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, q;
        cin >> n >> q;
        ll arr[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n, greater<>());
        ll csum[n], tmp = 0;
        for (ll i = 0; i < n; i++)
        {
            tmp += arr[i];
            csum[i] = tmp;
        }
        for (ll i = 0; i < q; i++)
        {
            ll x;
            cin >> x;
            ll f1 = 0;
            ll l = 0, r = n - 1, mid;
            while (l <= r)
            {
                mid = (l + r) / 2;
                if (csum[mid] >= x && (mid == 0 || csum[mid - 1] <= x))
                {
                    if (csum[mid - 1] == x)
                    {
                        cout << mid << endl;
                    }
                    else
                    {
                        cout << mid + 1 << endl;
                    }
                    f1++;
                    break;
                }
                else if (csum[mid] > x)
                {
                    r = mid - 1;
                }
                else if (csum[mid] < x)
                {
                    l = mid + 1;
                }
            }
            if (f1 == 0)
                cout << -1 << endl;
        }
    }
}