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
        string s[n - 2], str[n - 1];
        for (ll i = 0; i < n - 2; i++)
        {
            cin >> s[i];
        }
        string st;
        ll j = 0, flg = 0;
        for (ll i = 0; i < n - 3; i++)
        {
            str[j].push_back(s[i][0]);
            str[j].push_back(s[i][1]);
            j++;

            if (s[i][1] != s[i + 1][0])
            {
                str[j].push_back(s[i][1]);
                str[j].push_back(s[i + 1][0]);
                j++;
                flg++;
            }
        }
        str[j].push_back(s[n - 3][0]);
        str[j].push_back(s[n - 3][1]);

        for (ll i = 0; i <= j; i++)
        {
            st.push_back(str[i][0]);
        }
        st.push_back(str[j][1]);

        if (flg == 0)
        {
            st.push_back('a');
        }
        cout << st << endl;
    }
}