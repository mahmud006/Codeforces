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
        ll arr[n], brr[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (ll i = 0; i < n; i++)
        {
            cin >> brr[i];
        }
        ll chk, ans;
        for (ll i = 0; i < n; i++)
        {
            if (brr[i] < arr[i])
            {
                chk = brr[i];
                break;
            }
        }
        for (ll i = 0; i < n; i++)
        {
            if (arr[i] < chk)
            {
                ans = i;
                break;
            }
        }
        cout << ans << endl;
    }
}