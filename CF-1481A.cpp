#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll x, y;
        cin >> x >> y;
        string s;
        cin >> s;
        string st1, st2;
        if (x > 0 && y > 0)
        {
            if (x > y)
            {
                for (ll i = 0; i < y; i++)
                {
                    st1 += 'R';
                    st1 += 'U';
                    st2 += 'U';
                    st2 += 'R';
                }
                for (ll i = 0; i < x - y; i++)
                {
                    st1 += 'R';
                    st2 += 'R';
                }
            }
        }
    }
}