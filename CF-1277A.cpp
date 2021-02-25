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
        ll cnt = 0;
        for (ll i = n-1; i <= n; i++)
        {
            set<char> st;
            string s = to_string(i);
            for(ll j=0; j<s.size(); j++)
            {
                //cout << s[j] <<endl;
                st.insert(s[j]);
            }
            // ll x = i;
            // while (x != 0)
            // {
            //     ll chk = x % 10;
            //     x = x / 10;
            //     st.insert(chk);
            // }
            if (st.size() == 1)
            {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
}