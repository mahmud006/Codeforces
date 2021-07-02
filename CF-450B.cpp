#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll mod = 1E9 + 7;
int main()
{
    ll x, y;
    cin >> x >> y;
    ll n;
    cin >> n;
    ll f[n];
    f[1] = x;
    f[2] = y;
    if (n < 3)
    {
        if (f[n] < 0)
        {
            cout << mod + f[n] << endl;
        }
        else
        {
            cout << f[n] % mod << endl;
        }
    }
    else
    {
        for (ll i = 3; i <= n; i++)
        {
            f[i] = f[i - 1] - f[i - 2];
        }
        if (f[n] < 0)
        {
            cout << mod + f[n] << endl;
        }
        else
        {
            cout << f[n] % mod << endl;
        }
    }
}