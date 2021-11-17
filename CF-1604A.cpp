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
        ll arr[n], mx = 0, pos, s = 0, chk = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] > mx && arr[i] > i + 1 + chk)
            {
                mx = arr[i];
                pos = i + 1 + chk;

                s += mx - pos;
                chk = s;
            }
        }
        cout << s << endl;
        // ll chk = 0, s = 0;
        // for (ll i = 0; i < n; i++)
        // {
        // }
        //cout << s << endl;
    }
}