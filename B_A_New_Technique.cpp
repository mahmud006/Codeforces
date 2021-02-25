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
        ll arr[n][m];
        ll brr[m][n];
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < m; j++)
            {
                cin >> arr[i][j];
            }
        }
        ll crr[500], k = 0, drr[500], x = 0;
        for (ll i = 0; i < m; i++)
        {
            for (ll j = 0; j < n; j++)
            {
                cin >> brr[i][j];
                if (i == 0)
                {
                    ll c = brr[i][j];
                    crr[k] = c;
                    k++;
                }
                if (i == m - 1)
                {
                    ll d = brr[i][j];
                    drr[x] = d;
                    x++;
                }
            }
        }
        // for(ll i=0; i<=x; i++)
        // {
        //     cout << drr[i] <<endl;
        // }
        ll y = 0;
        for (ll l = 0; l < k; l++)
        {
            for (ll i = 0; i < n; i++)
            {
                ll chk = arr[i][0];
                if (chk == crr[l])
                {
                    for (ll j = 0; j < m; j++)
                    {
                        y++;
                        cout << arr[i][j] << " ";
                    }
                    cout << endl;
                }
            }
            
        }
        if (y == 0)
        {
            for (ll l = 0; l < x; l++)
            {
                for (ll i = 0; i < n; i++)
                {
                    ll chk = arr[i][0];
                    if (chk == drr[l])
                    {
                        for (ll j = 0; j < m; j++)
                        {
                            cout << arr[i][j] << " ";
                        }
                        cout << endl;
                    }
                }
            }
        }
    }
}