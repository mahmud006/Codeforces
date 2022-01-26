#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, flg = 0;
        cin >> n;
        ll arr[n];
        ll vis[n];
        memset(vis, 0, sizeof(vis));
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] <= n && vis[arr[i]] == 0)
            {
                vis[arr[i]] = 1;
            }
        }

        for (ll i = 0; i < n; i++)
        {

            while (arr[i] > n)
            {
                arr[i] = arr[i] / 2;
            }
            while (vis[arr[i]] != 0)
            {
                arr[i] = arr[i] / 2;
            }
            vis[arr[i]] = 1;
        }
        for (ll i = 1; i <= n; i++)
        {
            cout << vis[i] << " ";
            if (vis[i] == 0)
            {
                flg++;
            }
        }

        if (flg > 0)
            cout << "NO" << endl;
        else
        {
            cout << "YES" << endl;
        }
    }
}