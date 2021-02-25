#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n, t;
    cin >> n >> t;
    ll arr[n - 1];
    for (ll i = 0; i < n - 1; i++)
    {
        cin >> arr[i];
    }
    ll flg = 0;
    for (ll i = 0; i < n - 1;)
    {
        if (i + 1 == t)
        {
            flg++;
            break;
        }
        i += arr[i];
        if (i + 1 == t)
        {
            flg++;
            break;
        }
    }
    if (flg > 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}