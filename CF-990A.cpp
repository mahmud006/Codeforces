#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n, m, a, b;
    cin >> n >> m >> a >> b;
    if (n % m == 0)
    {
        cout << 0 << endl;
    }
    else
    {
        ll c1 = n / m * m;
        ll c2 = (n / m + 1) * m;
        ll c3 = (n - c1) * b;
        ll c4 = (c2 - n) * a;
        cout << min(c3, c4) << endl;
    }
}