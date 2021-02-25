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
        ll c1 = 0, c2 = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == 1)
            {
                c1++;
            }
            else
            {
                c2++;
            }
        }
        if (c2 >= c1)
        {
            cout << n / 2 << endl;
            for (ll i = 0; i < n / 2; i++)
            {
                cout << 0 << " ";
            }
            cout << endl;
        }
        else
        {
            if ((n / 2) % 2 == 0)
            {
                cout << n / 2 << endl;
                for (ll i = 0; i < n / 2; i++)
                {
                    cout << 1 << " ";
                }
                cout << endl;
            }
            else
            {
            cout << n / 2 + 1 << endl;
            for (ll i = 0; i < n / 2 + 1; i++)
            {
                cout << 1 << " ";
            }
            cout << endl;
            }
        }
    }
}