#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, x;
        cin >> n >> x;
        ll arr[n];
        ll chk = 0, flg = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] >= chk)
            {
                chk = arr[i];
            }
            else
            {
                flg++;
            }
        }
        if (flg == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
                }
    }
}