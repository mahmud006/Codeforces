
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
        for (ll i = 0; i < n; i++)
        {
            if (s[i] == 'U')
            {
                cout << 'D';
            }
            if (s[i] == 'D')
            {
                cout << 'U';
            }
            if (s[i] == 'L')
            {
                cout << 'L';
            }
            if (s[i] == 'R')
            {
                cout << 'R';
            }
        }
        cout << endl;
    }
}