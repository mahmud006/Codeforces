#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, b, x, y;
        cin >> n >> b >> x >> y;
        ll sum = 0, s = 0;
        for (ll i = 1; i <= n; i++)
        {
            if (s + x <= b)
            {
                s += x;
                sum += s;
            }
            else
            {
                s -= y;
                sum += s;
            }
        }
        cout << sum << endl;
    }
}