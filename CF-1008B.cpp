#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin >> n;
    ll w[n], h[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> w[i];
        cin >> h[i];
    }
    ll chk = INT_MAX, f = 0;
    for (ll i = 0; i < n; i++)
    {
        if (h[i] <= chk && w[i] <= chk)
        {
            chk = max(h[i], w[i]);
        }
        else if (h[i] <= chk && w[i] > chk)
        {
            chk = h[i];
        }
        else if (h[i] > chk && w[i] <= chk)
        {
            chk = w[i];
        }
        else
        {
            f++;
        }
    }
    if (f > 0)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
}