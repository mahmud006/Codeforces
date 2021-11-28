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
        string s = to_string(n);
        ll idx = 0, sz = s.size();
        for (ll i = 0; i < sz; i++)
        {
            if ((s[i] - '0') % 2 == 0)
            {
                idx = i + 1;
                break;
            }
        }
        //cout << (s[sz - 1] - '0') % 2 << endl;
        //cout << idx << endl;
        if (idx == 0)
            cout << -1 << endl;
        else
        {
            if (idx == sz || (s[sz - 1] - '0') % 2 == 0)
            {
                cout << 0 << endl;
            }
            else if (idx == 1)
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 2 << endl;
            }
        }
    }
}
