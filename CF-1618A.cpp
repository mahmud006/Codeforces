#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {

        ll arr[7], mx = 0;
        for (ll i = 0; i < 7; i++)
        {
            cin >> arr[i];
            if (arr[i] > mx)
                mx = arr[i];
        }
        cout << arr[0] << " " << arr[1] << " ";
        cout << mx - (arr[0] + arr[1]) << endl;
    }
}