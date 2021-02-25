#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll a, b;
    cin >> a >> b;
    ll cnt = 0;
    for (ll i = a; i <= b; i++)
    {
        string s = to_string(i);
        for (ll i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
            {
                cnt += 6;
            }
            if (s[i] == '1')
            {
                cnt += 2;
            }
            if (s[i] == '2')
            {
                cnt += 5;
            }
            if (s[i] == '3')
            {
                cnt += 5;
            }
            if (s[i] == '4')
            {
                cnt += 4;
            }
            if (s[i] == '5')
            {
                cnt += 5;
            }
            if (s[i] == '6')
            {
                cnt += 6;
            }
            if (s[i] == '7')
            {
                cnt += 3;
            }
            if (s[i] == '8')
            {
                cnt += 7;
            }
            if (s[i] == '9')
            {
                cnt += 6;
            }
        }
    }
    cout << cnt << endl;
}
