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
            if (arr[i] % 2 == 0)
            {
                c1++;
            }
            else
            {
                c2++;
            }
        }
        ll cnt = 0;
        if ((c1 > 0 && c2 > 0) && (c1 == c2 || c1 - 1 == c2))
        {
            for (ll i = 0; i < n; i++)
            {
                if (arr[i] % 2 != i % 2)
                {
                    cnt++;
                }
            }
            // for(ll i=0; i<n-1; i++)
            // {
            //     for(ll j=i+1; j<n; j++)
            //     {
            //         if(arr[i]>arr[j])
            //         {
            //             swap(arr[i], arr[j]);
            //             cnt++;
            //         }
            //     }
            // }
            cout << cnt / 2 << endl;
        }
        else if (c1 > 0 || c2 > 0)
        {
            cnt=0;
            for (ll i = 0; i < n; i++)
            {
                if (arr[i] % 2 != i % 2)
                {
                    cnt++;
                }
            }
            if (cnt == 0)
            {
                cout << cnt << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }

        else
        {
            cout << -1 << endl;
        }
    }
}