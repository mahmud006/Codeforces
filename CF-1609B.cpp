#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    string st = "abc";
    size_t x = s.find(st);
    ll cnt = 0;
    while (x != string::npos)
    {
        cnt++;
        x = s.find(st, x + 1);
    }

    while (q--)
    {
        ll i;
        char c;
        cin >> i >> c;
        if (s[i - 1] == c)
        {
            cout << cnt << endl;
        }
        else
        {
            cout << --cnt << endl;
        }
    }
}
