#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    set<char> st;
    for (ll i = 0; i < s.size(); i++)
    {
        st.insert(s[i]);
    }
    if (n - st.size() > 25 || n > 26)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << n - st.size() << endl;
    }
}