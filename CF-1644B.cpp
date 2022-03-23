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
        for (ll i = n; i > 0; i--)
        {
            cout << i << " ";
            for (ll j = n; j > 0; j--)
            {
                if (j != i)
                {
                    cout << j << " ";
                }
            }
            cout << endl;
        }
    }
}