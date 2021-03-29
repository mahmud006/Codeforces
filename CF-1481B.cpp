#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll arr[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        //vector<pair<int, int>> v;
        ll cnt = 0;
        ll flg = 0;
        while (1)
        {
            ll cnt1 = 0, cnt2 = 0;
            for (ll i = 0; i < n - 1; i++)
            {
                if (arr[i] < arr[i + 1])
                {
                    arr[i] += 1;
                    cnt++;
                    if (cnt == k)
                    {
                        cout << i + 1 << endl;
                        flg++;
                        //cnt1++;
                        break;
                    }
                    cnt2++;
                    break;
                }
            }
            // if (cnt1 > 0)
            // {
            //     break;
            // }
            if (cnt2 == 0)
            {
                break;
            }
        }
        if (flg == 0)
        {
            cout << -1 << endl;
        }
    }
}