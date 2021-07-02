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
        ll sum = 0, cnt = 0, c1 = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
            if (arr[i] < 0)
            {
                cnt++;
            }
            else
            {
                c1++;
            }
        }
        if (sum <= 0)
        {
            cout << 1 << endl;
        }
        else
        {
            if (sum >= n)
            {
                cout << sum - n << endl;
            }
            else
            {
                cout << 1 << endl;
            }
        }
    }
}