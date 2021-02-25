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
        ll c0 = 0, c1 = 0, c2 = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] % 3 == 0)
            {
                c0++;
            }
            if (arr[i] % 3 == 1)
            {
                c1++;
            }
            if (arr[i] % 3 == 2)
            {
                c2++;
            }
        }
        ll cnt = 0;
        while (1)
        {
            if (c0 == c1 && c1 == c2)
            {
                break;
            }
            while (c2 > c0)
            {
                c2--;
                c0++;
                cnt++;
            }
            while (c0 > c1)
            {
                c0--;
                c1++;
                cnt++;
            }
            while (c1 > c2)
            {
                c1--;
                c2++;
                cnt++;
            }
        }
        cout << cnt << endl;
    }
}