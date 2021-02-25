#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll r = 0, l = 0, u = 0, d = 0;
    for (ll i = 0; i < s.size(); i++)
    {
        if (s[i] == 'R')
        {
            r++;
        }
        if (s[i] == 'L')
        {
            l++;
        }
        if (s[i] == 'U')
        {
            u++;
        }
        if (s[i] == 'D')
        {
            d++;
        }
    }
    cout << min(r, l) * 2 + min(u, d) * 2 << endl;
}