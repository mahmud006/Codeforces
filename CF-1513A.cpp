#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll chk;
        chk = k * 2 + 1;
        //cout << chk << endl;
        ll c = 0;
        if (chk <= n && n > 2)
        {
            for (ll i = 1, j = n; i <= n, j > 0; i++, j--)
            {
                if (c == n)
                    break;
                cout << i << " ";
                c++;
                if (k > 0)
                {
                    cout << j << " ";
                    c++;
                }
                k--;
            }
            cout << endl;
        }
        else if (chk <= n && k == 0)
        {
            for (ll i = 1; i <= n; i++)
            {
                cout << i << " ";
            }
            cout << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}