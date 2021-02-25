#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n, k;
    cin >> n >> k;
    ll arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll j = 0, cnt = 0, res, flg = 0, sum = 0;
    for (ll i = 0; i < n; i++)
    {
        sum += i + 1;
        if (sum > k)
        {
            sum -= i + 1;
            for (ll j = 0; j < i + 1; j++)
            {
                sum++;
                if (sum == k)
                {
                    res = arr[j];
                    flg++;
                    break;
                }
            }
        }
        else if (sum == k)
        {
            res = arr[i];
            break;
        }
        if (flg > 0)
            break;
    }
    cout << res << endl;
}
