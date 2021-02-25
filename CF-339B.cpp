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
    ll x = 1, cnt = 0;
    arr[-1] = 1;
    for (ll i = 0; i < m; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            ll c1 = n - arr[i - 1];
            cnt += c1 + arr[i];
        }
        else
        {
            cnt += arr[i] - x;
        }
        x = arr[i];
    }
    cout << cnt << endl;
}