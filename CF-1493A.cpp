#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll cnt = 0, x;
        if (n >= k)
        {
            cnt = n - k;

            if (k % 2 == 0)
            {
                cnt += (k / 2);
                x = (k / 2);
            }
            else
            {
                cnt += (k / 2);
                x = (k / 2) + 1;
            }

            cout << cnt << endl;
            if (cnt > 0)
            {
                for (ll i = x; i < k; i++)
                {
                    cout << i << " ";
                }
                for (ll i = k + 1; i <= n; i++)
                {
                    cout << i << " ";
                }
                cout << endl;
            }
        }
        else
        {
            if (k % 2 == 0)
            {
                cnt += (k / 2);
                x = (k / 2);
            }
            else
            {
                cnt += (k / 2);
                x = (k / 2) + 1;
            }

            cout << cnt << endl;
            if (cnt > 0)
            {
                for (ll i = x + 1; i < k; i++)
                {
                    cout << i << " ";
                }
                cout << endl;
            }
        }
    }
}