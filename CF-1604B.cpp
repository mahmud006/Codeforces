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
        ll cnt = 0;
        for (ll i = 0; i < n - 1; i++)
        {
            if (arr[i + 1] > arr[i])
            {
                cnt++;
            }
        }
        if (n % 2 == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            if (cnt == n - 1)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
    }
}