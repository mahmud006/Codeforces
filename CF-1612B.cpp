#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, a, b;
        cin >> n >> a >> b;
        ll arr[n], brr[n];
        arr[0] = a, brr[0] = b;
        ll x = n, y = 1, j = 1, i = 1;
        while (1)
        {
            if (i == n / 2)
                break;
            if (x > a && x != b)
            {
                arr[i] = x;
                i++;
            }
            x--;
            if (x == 0)
                break;
        }
        while (1)
        {
            if (j == n / 2)
                break;
            if (y < b && y != a)
            {
                brr[j] = y;
                j++;
            }
            y++;
            if (y > n)
                break;
        }
        if (i == n / 2 && j == n / 2)
        {
            for (ll k = 0; k < i; k++)
            {
                cout << arr[k] << " ";
            }
            for (ll k = 0; k < j; k++)
            {
                cout << brr[k] << " ";
            }
            cout << endl;
        }
        else
            cout << -1 << endl;
    }
}
