#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n, m;
    cin >> n >> m;
    string s, t;
    cin >> s >> t;
    ll cnt = 0, mn = INT_MAX;
    string st1, st2;
    for (ll i = 0; i < m - n + 1; i++)
    {
        st1 = t.substr(i, n);
        for (ll j = 0, k = i; j < n, k < n + i; j++, k++)
        {
            //cout << t[k];
            if (s[j] != t[k])
            {
                cnt++;
            }
        }
        //cout << endl;
        //cout << cnt << endl;
        if (cnt < mn)
        {
            mn = cnt;
            st2 = st1;
        }
        cnt = 0;
    }
    cout << mn << endl;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] != st2[i])
        {
            cout << i + 1 << " ";
        }
    }
    cout << endl;
}