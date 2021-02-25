#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin >> n;
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll cnt = 1, mx = 0;
    for (ll i = 1; i < n; i++)
    {
        if (arr[i] > arr[i - 1])
        {
            cnt++;
        }
        else
        {
            cnt = 1;
        }
        if (cnt > mx)
        {
            mx = cnt;
        }
    }
    if (n == 1)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << mx << endl;
    }
}