#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll arr[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        ll mn = INT_MAX, mx = 0;
        ll idx1, idx2;
        for (ll i = 0; i < n; i++)
        {
            if (arr[i] > mx)
            {
                mx = arr[i];
                idx1 = i + 1;
            }
            if (arr[i] < mn)
            {
                mn = arr[i];
                idx2 = i + 1;
            }
        }
        cout << idx2 << " " << idx1 << endl;
    }
}