#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        ll arr[n], brr[m];
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (ll i = 0; i < m; i++)
        {
            cin >> brr[i];
        }
        ll cnt=0;
        if (n < m)
        {
            for (ll i = 0; i < n; i++)
            {
                for (ll j = 0; j < m; j++)
                {
                    if(arr[i]==brr[j])
                    {
                        cnt++;
                    }
                }
            }
        }
        else
        {
            for (ll i = 0; i < m; i++)
            {
                for (ll j = 0; j < n; j++)
                {
                    if(brr[i]==arr[j])
                    {
                        cnt++;
                    }
                }
            }
        }
        cout << cnt <<endl;
    }
}