#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;

    // Check from 2 to n-1
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;

    return true;
}

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
        ll flg = 0, ans;
        for (ll i = 0; i < n; i++)
        {
            ll chk = s[i] - '0';
            if (!isPrime(chk))
            {
                flg++;
                ans = chk;
                break;
            }
        }
        if (flg > 0)
        {
            cout << 1 << endl;
            cout << ans << endl;
        }
        else
        {
            for (ll i = 0; i < s.size() - 1; i++)
            {
                for (ll j = i + 1; j < s.size(); j++)
                {
                    ll st;
                    st = (s[i] - '0') * 10 + (s[j] - '0');
                    if (!isPrime(st))
                    {
                        ans = st;
                        break;
                    }
                }
            }
            cout << 2 << endl;
            cout << ans << endl;
        }
    }
}