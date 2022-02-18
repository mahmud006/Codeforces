#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (s.size() == 1)
        {
            cout << 0 << endl;
        }
        else
        {
            ll ans = 0;

            ll mn = 0, c1 = 0, c2 = 0;
            for (ll j = 0; j < s.size(); j++)
            {
                if (s[j] == '0')
                {
                    c1++;
                }
                else
                {
                    c2++;
                }
                if (j > 0 && (c1 > c2 || c1 < c2))
                {
                    ll chk = min(c1, c2);
                    // cout << chk << " ";
                    if (chk > mn)
                    {
                        mn = chk;
                    }
                }

                ans = mn;
            }
            cout << ans << endl;
        }
    }
}