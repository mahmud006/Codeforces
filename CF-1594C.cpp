#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        char c;
        cin >> c;
        string s;
        cin >> s;
        ll flg1 = 0, flg2 = 0;
        for (ll i = 0; i < s.size(); i++)
        {
            if (i % 2 == 0)
            {
                if (s[i] != c)
                {
                    flg1++;
                }
            }
            else
            {
                if (s[i] != c)
                {
                    flg2++;
                }
            }
        }
        if (flg1 > 0 && flg2 == 0)
        {
            cout << 1 << endl;
            cout << 2 << endl;
        }
        else if (flg1 == 0 && flg2 > 0)
        {
            cout << 1 << endl;
            if (n % 2 == 0)
            {
                cout << n - 1 << endl;
            }
            else
            {
                cout << n << endl;
            }
        }
        else if (flg1 > 0 && flg2 > 0)
        {
            if (n % 2 != 0 && s[n - 1] == c)
            {
                cout << 1 << endl;
                cout << n << endl;
            }
            else if (n % 2 == 0 && s[n - 2] == c)
            {
                cout << 1 << endl;
                cout << n - 1 << endl;
            }
            else
            {
                cout << 2 << endl;
                cout << 2 << " ";
                if (n % 2 == 0)
                {
                    cout << n - 1 << endl;
                }
                else
                {
                    cout << n << endl;
                }
            }
        }
        else
        {
            cout << 0 << endl;
        }
    }
}