#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n, q;
    cin >> n >> q;
    ll arr[n];
    ll c1 = 0, c2 = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 1)
        {
            c1++;
        }
        if (arr[i] == 0)
        {
            c2++;
        }
    }
    for (ll i = 0; i < q; i++)
    {
        ll t, x;
        cin >> t >> x;
        if (t == 1)
        {
            if (arr[x - 1] == 1)
            {
                c1--;
            }
            else
            {
                c1++;
            }
            arr[x - 1] = 1 - arr[x - 1];

            //cout << "c1: " << c1 << endl;
        }
        if (t == 2)
        {
            if (x <= c1)
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 0 << endl;
            }
        }
    }
}