#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll arr[n], mx = 0, mn = INT_MAX;
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] < mn)
                mn = arr[i];
            if (arr[i] > mx)
                mx = arr[i];
        }
        cout << mx - mn << endl;
    }
}