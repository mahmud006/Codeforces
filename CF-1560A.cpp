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
        ll cnt = 0;
        for (ll i = 1;; i++)
        {
            if (i % 3 == 0 || i % 10 == 3)
            {
                //cout << i << ":" << cnt << endl;
                continue;
            }
            cnt++;
            if (cnt == n)
            {
                cout << i << endl;
                break;
            }
        }
    }
}