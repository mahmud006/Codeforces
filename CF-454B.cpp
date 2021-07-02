#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;
    cin >> n;
    ll arr[n];
    vector<ll> v[n];
    ll f1 = 0, f2 = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll j = 0;
    for (ll i = 0; i < n; i++)
    {
        v[j].push_back(arr[i]);
        if (arr[i] > arr[i + 1] && i < n - 1)
        {
            j++;
        }
    }
    if (j == 1)
    {
        if (v[1][v[1].size() - 1] <= arr[0])
        {
            cout << v[1].size() << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    else if (j == 0)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}