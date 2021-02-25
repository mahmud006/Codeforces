#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    unordered_set<char> st;
    ll res = 0, mx = 0;
    for (ll i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            //cout << res << endl;
            res = 0;
            st.clear();
        }
        else
        {
            if (st.find(s[i]) == st.end())
            {
                st.insert(s[i]);
                //cout << s[i] << endl;
                res++;
            }
        }
        if (res > mx)
        {
            mx = res;
        }
    }
    cout << mx << endl;
}