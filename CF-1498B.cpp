#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, w;
        cin >> n >> w;
        ll arr[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        ll sum = 0, cnt = 0, idx1, idx2;
        for (ll i = 0; i < n; i++)
        {
            if (arr[i] + sum > w)
            {
                idx1 = i - 1;
                idx2 = i;
                break;
            }
            sum += arr[i];
        }
        ll chk1 = n - idx2;
        ll chk2 = idx1 + 1, chk3;
        sum = 0;
        ll x = 0;

        if (chk3 - idx1 == 0)
        {
            cout << chk1 << endl;
        }
        else
        {
            cout << chk1 + 1 << endl;
        }
    }
}