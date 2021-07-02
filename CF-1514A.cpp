#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool isPerfectSquare(long double x)
{
    if (x >= 0)
    {
        long long sr = sqrt(x);
        return (sr * sr == x);
    }
    return false;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll arr[n];
        ll flg = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (!isPerfectSquare(arr[i]))
            {
                flg++;
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
}