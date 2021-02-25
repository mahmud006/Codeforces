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
    if (n == 1)
    {
        cout << -1 << endl;
    }
    else if (n == 2)
    {
        if (arr[0] != arr[1])
        {
            cout << 1 << endl;
            cout << 1 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    else
    {
        ll mn = INT_MAX, idx;
        for (ll i = 0; i < n; i++)
        {
            if (arr[i] < mn)
            {
                mn = arr[i];
                idx = i + 1;
            }
        }
        cout << 1 << endl;
        cout << idx << endl;
    }
}