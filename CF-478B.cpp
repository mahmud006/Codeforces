#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n, m;
    cin >> n >> m;
    ll chk = (n - (m - 1)) - 1;
    ll mx = (chk) * (chk + 1) / 2;

    ll chk2 = (n / m);
    ll chk3 = (n % m);

    ll mn1 = 0, mn2 = 0;
    if (n % m > 0)
    {
        mn1 = (((chk2 + 1) - 1) * (((chk2 + 1) - 1) + 1) / 2) * chk3;
        ll chk4 = m - chk3;
        if (chk2 > 1)
        {
            mn2 = ((chk2 - 1) * ((chk2 - 1) + 1) / 2) * chk4;
        }
    }
    else
    {
        mn1 = ((chk2 - 1) * ((chk2 - 1) + 1) / 2) * m;
    }

    cout << mn1 + mn2 << " " << mx << endl;
}