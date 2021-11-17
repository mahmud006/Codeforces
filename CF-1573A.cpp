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
        string s;
        cin >> s;
        ll s1 = 0, c1 = 0;
        for (ll i = 0; i < n; i++)
        {
            if (s[i] - '0' > 0)
            {
                s1 += s[i] - '0';
                if (i < n - 1)
                {
                    c1++;
                }
            }
        }
        cout << s1 + c1 << endl;
    }
}