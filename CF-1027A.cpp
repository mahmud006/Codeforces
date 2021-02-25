#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        ll flg = 0;
        for (ll i = 0, j = n - 1; i < n / 2, j >= n / 2; i++, j--)
        {
            ll chk = abs(s[i] - s[j]);
            if (chk > 2 || chk == 1)
            {
                flg++;
            }
        }
        if (flg > 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}