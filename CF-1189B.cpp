#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;
    cin >> n;
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    // sort(arr, arr + (n / 2));
    // sort(arr + (n / 2), arr + n, greater<>());
    swap(arr[n - 1], arr[n - 2]);
    ll cnt = 0;
    if (arr[n - 1] + arr[1] > arr[0])
    {
        cnt++;
    }
    if (arr[n - 2] + arr[0] > arr[n - 1])
    {
        cnt++;
    }
    for (ll i = 1; i < n - 1; i++)
    {
        if (arr[i - 1] + arr[i + 1] > arr[i])
        {
            cnt++;
        }
    }
    if (cnt == n)
    {
        cout << "YES" << endl;
        for (ll i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "NO" << endl;
        // for (ll i = 0; i < n; i++)
        // {
        //     cout << arr[i] << " ";
        // }
        // cout << endl;
    }
}