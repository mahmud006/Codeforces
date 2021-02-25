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
        ll arr[n];
        ll c0 = 0, c1 = 0, c2 = 0;
        vector<int> v;
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] % 3 == 0)
            {
                c0++;
            }
            else if (arr[i] % 3 == 1)
            {
                c1++;
            }
            else if (arr[i] % 3 == 2)
            {
                c2++;
            }
        }
        ll chk = min(c1, c2);
        ll chk2 = max(c1, c2) - min(c1, c2);
        ll chk3 = chk2 / 3;
        cout << c0 + chk + chk3 << endl;
    }
}