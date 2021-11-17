#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        ll a = 0, b = 0, c1 = 0, c2 = 0;
        ll n = s.size();

        for (ll i = n - 1; i >= 0; i--)
        {
            if (s[i] == 'a')
            {
                if (s[i - 1] == 'b')
                {
                    c2++;
                }
                a++;
            }
            else if (s[i] == 'b')
            {
                if (s[i - 1] == 'a')
                {
                    c1++;
                }
                b++;
            }
        }
        cout << c1 << " " << c2 << endl;
        if (c1 == c2)
        {
            cout << s << endl;
        }
        else if (c1 > c2)
        {
            for (ll i = n - 1; i > 0; i--)
            {
                if (s[i] == 'a' && s[i - 1] == 'b')
                {
                    if (i <= s.size() - 1 && s[i + 1] == 'a')
                    {
                        s[i + 1] = 'b';
                        break;
                    }
                    else
                    {
                        s[i] = 'b';
                        break;
                    }
                }
            }
            cout << s << endl;
        }
        else
        {
            for (ll i = n - 1; i >= 0; i--)
            {
                if (s[i] == 'b' && s[i - 1] == 'a')
                {
                    if (i <= s.size() - 1 && s[i + 1] == 'b')
                    {
                        s[i + 1] = 'a';
                        break;
                    }
                    else
                    {
                        s[i] = 'a';
                        break;
                    }
                }
            }
            cout << s << endl;
        }
    }
}