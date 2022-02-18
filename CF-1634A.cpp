#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        set<char> st;
        if (k == 0)
        {
            cout << 1 << endl;
        }
        else
        {
            for (ll i = 0; i < n; i++)
            {
                st.insert(s[i]);
            }
            string str = s;
            reverse(s.begin(), s.end());
            // cout << st.size() << endl;
            if (st.size() == 1 || s == str)
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