#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin >> n;
    ll l[n], r[n];
    ll mx = 0, idx = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> l[i] >> r[i];
        ll chk = abs(l[i] - r[i]);
        if (chk > mx)
        {
            mx = chk;
            idx = i;
        }
    }
    //cout << l[idx] << endl;
    ll cnt = 0;
    for (ll i = 0; i < n; i++)
    {
        if (l[i] >= l[idx] && r[i] <= r[idx])
        {
            cnt++;
        }
    }
    //cout << cnt << endl;
    if (cnt == n)
    {
        cout << idx + 1 << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}