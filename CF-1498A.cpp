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

        while (1)
        {
            string s = to_string(n);
            ll sum = 0;
            //cout << s << endl;
            for (ll i = 0; i < s.size(); i++)
            {
                sum += s[i] - '0';
            }
            if (__gcd(n, sum) > 1)
            {
                cout << n << endl;
                break;
            }
            n++;
        }
    }
}