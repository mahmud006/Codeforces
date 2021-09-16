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
        ll chk, mx = 0;
        for (ll i = 0; i < n - 1; i++)
        {
            chk = arr[i] * arr[i + 1];
            if (chk > mx)
            {
                mx = chk;
            }
        }
        cout << mx << endl;
    }
}