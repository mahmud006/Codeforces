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
        ll flg = 0;
        for (ll i = 0; i < n; i++)
        {
            ll cnt = 0;
            for (ll j = i; j < i + arr[i]; j++)
            {
                //cout << arr[j] << " ";
                if (j == n)
                    break;
                if (arr[j] > arr[i])
                {
                    i = j;
                    break;
                }
                cnt++;
                if (cnt == arr[i])
                {
                    i = j;
                    flg++;
                    break;
                }
            }
            //cout << endl;
        }
        cout << flg << endl;
    }
}
