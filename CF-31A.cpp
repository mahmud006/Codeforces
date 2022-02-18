#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{

    ll n;
    cin >> n;
    ll arr[n];
    unordered_map<int, int> v;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        v[arr[i]] = i;
    }
    ll flg = 0;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = i + 1; j < n; j++)
        {
            ll chk = arr[i] + arr[j];
            if (v.count(chk))
            {
                cout << v[chk] + 1 << " " << i + 1 << " " << j + 1 << endl;
                flg++;
                break;
            }
        }
        if (flg > 0)
        {
            break;
        }
    }
    if (flg == 0)
    {
        cout << -1 << endl;
    }
}