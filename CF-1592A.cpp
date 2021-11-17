#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, h;
        cin >> n >> h;
        ll arr[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n, greater<>());
        ll mx1 = arr[0];
        ll mx2 = arr[1], cnt = 0;
        if (h <= mx1)
        {
            cout << 1 << endl;
        }
        else
        {
            ll chk = mx1 + mx2;
            if (h % chk == 0)
            {
                cout << (h / chk) * 2 << endl;
            }
            else
            {
                ll chk1 = h - ((h / chk) * chk);
                if (chk1 <= mx1 || chk1 <= mx2)
                {
                    cout << ((h / chk) * 2) + 1 << endl;
                }
                else
                {
                    cout << ((h / chk) * 2) + 2 << endl;
                }
                        }
        }
    }
}