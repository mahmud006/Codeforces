#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n, m;
    cin >> n >> m;
    ll arr[m];
    for (ll i = 0; i < m; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + m);
    ll mn = INT_MAX;
    for (ll i = 0, j = n - 1; i < m - n, j < m; i++, j++)
    {
        ll chk = arr[j] - arr[i];
        if (chk < mn)
        {
            mn = chk;
        }
    }
    cout << mn << endl;
}
