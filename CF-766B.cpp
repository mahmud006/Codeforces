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
    ll flg = 0;
    sort(arr, arr + n, greater<>());
    for (ll i = 0; i < n - 2; i++)
    {
        if (arr[i + 1] + arr[i + 2] > arr[i])
        {
            flg++;
            break;
        }
    }
    if (flg > 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}