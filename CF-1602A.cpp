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

        ll chk = 0;
        char mn = 'z';
        for (ll i = 0; i < s.size(); i++)
        {
            if (s[i] <= mn)
            {
                mn = s[i];
                chk = i;
            }
        }
        cout << s[chk] << " ";
        s.erase(s.begin() + chk);
        cout << s << endl;
    }
}