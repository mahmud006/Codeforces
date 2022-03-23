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
        char c;
        cin >> c;
        ll chk1, chk2, flg = 0;
        for (ll i = 0; i < s.size(); i++)
        {
            if (s[i] == c)
            {
                chk1 = i - 0;
                chk2 = s.size() - (i + 1);
                if (chk1 % 2 == 0 && chk2 % 2 == 0)
                {
                    cout << "YES" << endl;
                    flg++;
                    break;
                }
            }
        }
        if (flg == 0)
        {
            cout << "NO" << endl;
        }
        // cout << chk1 << endl;
        // cout << chk2 << endl;
    }
}