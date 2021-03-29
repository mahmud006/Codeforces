#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll q, d;
        cin >> q >> d;
        ll arr[q];
        for (ll i = 0; i < q; i++)
        {
            cin >> arr[i];
        }
        string st = to_string(d);
        //cout << st << endl;
        for (ll i = 0; i < q; i++)
        {
            ll flg = 0;
            string s = to_string(arr[i]);
            for (ll j = 0; j < s.size(); j++)
            {
                //cout << s[i] << endl;
                if (s[j] == st[0])
                {
                    cout << "YES" << endl;
                    flg++;
                    break;
                }
            }
            if (flg == 0)
            {
                ll chk = arr[i] - d;
                s = to_string(chk);
                //cout << s << endl;
                for (ll j = 0; j < s.size(); j++)
                {
                    //cout << s[i] << endl;
                    if (s[j] == st[0])
                    {
                        cout << "YES" << endl;
                        flg++;
                        break;
                    }
                }
                if (flg == 0)
                {
                    cout << "NO" << endl;
                }
            }
        }
    }
}