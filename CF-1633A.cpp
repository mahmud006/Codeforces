#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        if (n % 7 == 0)
        {
            cout << n << endl;
        }
        else
        {
            ll chk = n % 7;
            ll chk1 = n + (7 - chk);
            if (chk1 / 10 > n / 10)
            {
                cout << n - chk << endl;
            }
            else
            {
                cout << n + (7 - chk) << endl;
            }
        }
    }
}