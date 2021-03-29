#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> st;
    for (ll i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        st.push_back(s.size());
    }
    sort(st.begin(), st.end());
    string str;
    cin >> str;
    ll j = 0, flg = 0, ul;
    for (auto x : st)
    {
        j++;
        if (x == str.size())
        {
            if (flg == 0)
            {
                ul = j;
                ll ch = 0;
                if (ul - 1 >= k)
                {
                    ch = ((ul - 1) / k) * 5;
                }
                cout << 1 + (ul - 1) + ch << " ";
                flg++;
            }
            else
            {
                ul = j;
            }
        }
    }
    ll chk = 0;
    if (ul - 1 >= k)
    {
        chk = ((ul - 1) / k) * 5;
    }
    cout << 1 + (ul - 1) + chk << endl;
}