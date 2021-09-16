#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll l, r;
        cin >> l >> r;
        ll chk = r / 2;
        if (chk >= l)
        {
            cout << r % (chk + 1) << endl;
        }
        else
        {
            cout << r % l << endl;
        }
    }
}