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
        ll chk = 6 + 10 + 14;
        if (n <= 30)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            if (n - chk == 6 || n - chk == 10 || n - chk == 14)
            {
                cout << 6 << " " << 10 << " " << 15 << " " << n - chk - 1 << endl;
            }
            else
            {
                cout << 6 << " " << 10 << " " << 14 << " " << n - chk << endl;
            }
        }
    }
}