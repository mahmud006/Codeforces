#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, t;
        cin >> s >> t;
        string st = s;
        sort(st.begin(), st.end());
        // cout << st << endl;
        ll l = 0;
        for (ll i = 0; i < st.size(); i++)
        {
            if (t[l] == st[i])
            {
                l++;
            }
        }
        if (l >= 3)
        {
            ll flg = 0;
            for (ll i = 0; i < st.size(); i++)
            {
                if (st[i] == t[0])
                {
                    cout << st[i];
                }
                if (st[i] == t[1] && flg == 0)
                {
                    for (ll j = 0; j < st.size(); j++)
                    {
                        if (st[j] == t[2])
                        {
                            cout << st[j];
                        }
                    }
                    for (ll k = 0; k < st.size(); k++)
                    {
                        // cout << st[k];
                        if (st[k] == t[1])
                        {
                            cout << st[k];
                            // cout << 'a' << endl;
                        }
                    }
                    flg++;
                }
                if ((st[i] != t[0] && st[i] != t[1]) && st[i] != t[2])
                {
                    cout << st[i];
                }
            }
            cout << endl;
        }
        else
        {
            cout << st << endl;
        }

        // for (ll i = 0; i < s.size(); i++)
        // {
        //     if (s[i] == t[2] && t[2] != st[0])
        //     {
        //         cout << s[i];
        //     }
        // }
        // for (ll i = 0; i < s.size(); i++)
        // {
        //     if (s[i] != st[0] && s[i] != t[2])
        //     {
        //         cout << s[i];
        //     }
        // }
        // cout << endl;
    }
}