#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;
    cin >> n;
    string st = to_string(n);
    ll len = st.size();
    if (n <= 9)
    {
        cout << n << endl;
    }
    else
    {
        ll x = 1;
        ll y = 9;
        ll res = 0, sum = 0;
        while (x <= len - 1)
        {
            // cout << "y " << y << endl;
            res = res + (y * x);
            x++;
            sum += y;
            y = (y * 10);
        }
        ll chk = n - sum;
        res = res + (chk * len);
        // cout << sum << endl;
        // cout << chk << endl;
        cout << res << endl;
    }
}