#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n, k;
    cin >> n >> k;
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll cnt = 0;
    for (ll i = 0; i < n - 1; i++)
    {
        ll chk = arr[i] + arr[i + 1];
        if (chk < k)
        {
            arr[i + 1] += k - chk;
            cnt += (k - chk);
        }
    }
    cout << cnt << endl;
    for (ll i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}