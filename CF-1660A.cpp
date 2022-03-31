#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        ll c1 = a * 1;
        ll c2 = b * 2;
        if (a == 0)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << c1 + c2 + 1 << endl;
        }
    }
}