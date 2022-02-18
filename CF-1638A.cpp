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
        vector<ll> v;
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            v.push_back(arr[i]);
        }
        ll chk1, chk2, flg = 0;
        ll ind;
        for (ll i = 0; i < n; i++)
        {
            if ((i + 1) != arr[i])
            {
                // cout << "a " << endl;
                chk1 = i;
                flg++;
                auto it = find(v.begin(), v.end(), i + 1);
                ind = it - v.begin();
                break;
            }
            else
            {
                cout << arr[i] << " ";
            }
        }
        ll chk3;
        if (flg > 0)
        {
            // cout << ind << endl;
            for (ll i = ind; i >= chk1; i--)
            {
                cout << arr[i] << " ";
            }
            for (ll i = ind + 1; i < n; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
        else
        {
            cout << endl;
        }
    }
}