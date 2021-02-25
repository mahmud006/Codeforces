#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n, m;
    cin >> n >> m;
    ll arr[m];
    ll flg = 0;
    for (ll i = 0; i < m; i++)
    {
        cin >> arr[i];
        if (arr[i] == 1)
        {
            flg++;
        }
        if (arr[i] == n)
        {
            flg++;
        }
    }
    if (flg > 0)
    {
        cout << "NO" << endl;
    }
    else
    {
        sort(arr, arr + m);
        ll cnt = 1, flg = 0;
        for (ll i = 0; i < m - 1; i++)
        {
            ll chk = abs(arr[i] - arr[i + 1]);
            if (chk == 1)
            {
                cnt++;
                if (cnt == 3)
                {
                    flg++;
                    break;
                }
            }
            else
            {
                cnt = 1;
            }
        }
        if (flg > 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}