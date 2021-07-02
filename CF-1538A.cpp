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
        ll mx = *max_element(arr, arr + n);
        ll mn = *min_element(arr, arr + n);
        ll chk1, chk2, chk3, chk4;
        for (ll i = 0, j = n - 1; i < n, j >= 0; i++, j--)
        {
            if (arr[i] == mx)
            {
                chk1 = i + 1;
            }
            if (arr[i] == mn)
            {
                chk2 = i + 1;
            }
            if (arr[j] == mx)
            {
                chk3 = i;
            }
            if (arr[j] == mn)
            {
                chk4 = i;
            }
        }
        ll ch1 = min(chk1, chk2);
        ll ch2 = min(abs(chk3 - n), abs(chk4 - n));
        ll ch3 = min(ch1 + ch2, ch1 + abs(chk1 - chk2));
        ll ch4 = min(ch1 + ch2, ch2 + abs(chk3 - chk4));
        cout << min(ch3, ch4) << endl;
    }
}
