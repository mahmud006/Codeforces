
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        ll c0 = 0, c1 = 0;
        s.erase(std::unique(s.begin(), s.end()), s.end());
        ll mx = 0;
        for (ll i = 0; i < s.size(); i++)
        {
            ll chk = s[i] - '0';
            if (chk & 1)
            {
                c1++;
            }
            else
            {
                c0++;
            }
            if (chk > mx)
            {
                mx = chk;
                //cout << mx << endl;
            }
        }
        cout << min(c0, (mx + 1)) << endl;
    }
}