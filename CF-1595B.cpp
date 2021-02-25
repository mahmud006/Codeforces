#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n, m, x, y;
    cin >> n >> m >> x >> y;
    ll vis[n][m];
    memset(vis, 0, sizeof(vis));
    vis[x][y] = 0;
    cout << x << " " << y << endl;
    ll b = y;
    b++;
    while (b != m + 1)
    {
        cout << x << " " << b << endl;
        b++;
    }
    b = y - 1;
    while (b != 0)
    {
        cout << x << " " << b << endl;
        b--;
    }
    ll a = x;
    a++;
    for (ll i = a; i <= n; i++)
    {
        for (ll j = 1; j <= m; j++)
        {
            cout << i << " " << j << endl;
        }
    }
    for (ll i = 1; i < x; i++)
    {
        for (ll j = 1; j <= m; j++)
        {
            cout << i << " " << j << endl;
        }
    }
}