#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, s;
        cin >> a >> s;
        ll len1 = a.size();
        ll len2 = s.size();
        // a.insert(0, len2 - len1, '0');
        // len1 = a.size();
        //  cout << a << endl;
        vector<string> v;
        ll flg = 0, i, j;
        string st;
        for (i = len1 - 1, j = len2 - 1; i >= 0, j >= 0;)
        {
            if (i < 0 || j < 0)
            {
                break;
            }
            ll y = s[j] - '0';
            ll x = a[i] - '0';
            ll z;
            if (x <= y)
            {
                z = y - x;
                st += to_string(z);
                // v.push_back(to_string(z));
            }
            else if (x > y)
            {
                if (s[j - 1] == '1')
                {
                    y = (10 * (s[j - 1] - '0')) + (s[j] - '0');
                    j--;
                    if (y >= 10 && y <= 18)
                    {
                        z = y - x;
                        st += to_string(z);
                        // v.push_back(to_string(z));
                    }
                    else
                    {
                        flg++;
                    }
                }
                else
                {
                    flg++;
                }
            }
            i--;
            j--;
        }
        if (flg > 0)
        {
            cout << -1 << endl;
            // cout << 'a' << endl;
        }
        else if (i >= 0 && j == -1)
        {
            cout << -1 << endl;
            // cout << 'a' << endl;
        }
        else if (j >= 0 && i == -1)
        {
            for (ll m = j; m >= 0; m--)
            {
                st += s[m];
            }
            reverse(st.begin(), st.end());
            cout << st << endl;
        }
        else
        {
            reverse(st.begin(), st.end());
            cout << stoi(st) << endl;
        }
    }
}