#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll s;
        cin >> s;
        ll chk1 = 0, cnt = 0;
        for (ll i = 1;; i += 2)
        {
            if (chk1 >= s)
                break;
            chk1 += i;
            cnt++;
            //cout << chk1 << endl;
        }
        cout << cnt << endl;
    }
}