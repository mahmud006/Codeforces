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
        ll f1 = 0, f2 = 0, f3 = 0, cnt = 0;
        for (ll i = 0; i < s.size(); i++)
        {
            if (s[i] == 'r')
            {
                f1++;
            }
            if (s[i] == 'g')
            {
                f2++;
            }
            if (s[i] == 'b')
            {
                f3++;
            }
            if (s[i] == 'R' && f1 > 0)
            {
                cnt++;
            }
            if (s[i] == 'G' && f2 > 0)
            {
                cnt++;
            }
            if (s[i] == 'B' && f3 > 0)
            {
                cnt++;
            }
        }
        if (cnt == 3)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}