#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin >> n;
    ll arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n, greater<>());
    ll j = 0, brr[n];
    //cout << arr[j] << endl;
    for (ll i = 1; i < n; i += 2)
    {
        brr[i] = arr[j];
        j++;
    }
    //cout << j << endl;
    for (ll i = 0; i < n; i += 2)
    {
        brr[i] = arr[j];
        j++;
    }
    for (ll i = 0; i < n; i++)
    {
        cout << brr[i] << " ";
    }
    cout << endl;
}
