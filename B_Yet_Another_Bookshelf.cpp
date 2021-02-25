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
        ll cnt = 0, c = 0, x = 0;
        for (ll i = 0; i < n; i++)
        {
            if (arr[i] == 1)
            {
                x++;
                c += cnt;
                cnt = 0;
            }
            if (x > 0)
            {
                if (arr[i] == 0)
                {
                    cnt++;
                }
            }
        }
        cout << c << endl;
    }
}