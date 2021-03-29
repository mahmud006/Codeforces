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
    ll dif = abs(0 - arr[0]);
    for (ll i = 0; i < n - 1; i++)
    {
        dif += abs(arr[i] - arr[i + 1]);
    }
    cout << dif << endl;
}