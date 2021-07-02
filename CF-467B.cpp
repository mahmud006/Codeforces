#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll bitcount(ll n)
{
    ll cnt = 0;
    while (n > 0)
    {
        cnt += 1;
        n = n & (n - 1);
        //cout << n << endl;
    }
    return cnt;
}
int main()
{
    ll n, m, k;
    cin >> n >> m >> k;
    ll arr[m + 1], x;
    for (ll i = 0; i <= m; i++)
    {
        cin >> arr[i];
        x = arr[i];
    }
    ll cnt = 0;
    for (ll i = 0; i < m; i++)
    {
        if (bitcount(arr[i] ^ x) <= k)
        {
            cnt++;
        }
    }
    cout << cnt << endl;
}