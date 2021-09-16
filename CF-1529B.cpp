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
        ll cnt = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] > 0)
            {
                cnt++;
            }
        }
        if (cnt > 0)
        {
            if (cnt == 1)
            {
                cout << n - cnt << endl;
            }
            else
            {

                cout << (n - cnt) + 1 << endl;
            }
        }
        else
        {
            cout << n << endl;
        }
    }
}