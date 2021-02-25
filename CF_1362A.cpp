#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b, cnt = 0;
        cin >> a >> b;
        if (a > b)
            swap(a, b);
        while (a < b)
        {
            a = a * 2;
            cnt++;
        }
        if (a != b)
        {
            cout << -1 << endl;
        }
        else
        {

            if (cnt % 3 == 0)
            {
                cout << cnt / 3 << endl;
            }
            else
            {
                cout << cnt / 3 + 1 << endl;
            }
        }
    }
}