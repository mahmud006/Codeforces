#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    // string mn = s;
    ll pos = n - 1;
    for (ll i = 0; i < n - 1; i++)
    {
        if (s[i] > s[i + 1])
        {
            pos = i;
            break;
        }
    }
    cout << s.substr(0, pos) + s.substr(pos + 1) << endl;
}