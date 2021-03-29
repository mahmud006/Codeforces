#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin >> n;
    ll l[n], r[n];
    ll l1 = 0, r1 = 0;
    ll idx, flg = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> l[i] >> r[i];
        l1 += l[i];
        r1 += r[i];
    }
    ll chk1 = abs(l1 - r1), ch1 = 0;
    ll mx1 = chk1;
    for (ll i = 0; i < n; i++)
    {
        ch1 = abs(((l1 - l[i]) + r[i]) - ((r1 - r[i]) + l[i]));
        if (ch1 > mx1)
        {
            mx1 = ch1;
            idx = i;
        }
    }
    if (mx1 > chk1)
    {
        cout << idx + 1 << endl;
    }
    else
    {
        cout << 0 << endl;
    }
}