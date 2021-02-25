#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll gc(ll n1, ll n2)
{
    if (n2 != 0)
    {
        return gc(n2, n1 % n2);
    }
    else
    {
        return n1;
    }
}
int main()
{
    ll a, b, x, y;
    cin >> a >> b >> x >> y;
    ll chk = gc(x, y);
    ll c1 = x / chk;
    ll c2 = y / chk;

    ll ch1 = a / c1;
    ll ch2 = b / c2;
    cout << min(ch1, ch2) << endl;
}