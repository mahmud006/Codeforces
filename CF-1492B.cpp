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
        set<int> vc;
        set<int>::iterator it;
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            vc.insert(arr[i]);
        }

        ll y = n - 1;
        for (ll i = n - 1; i >= 0; i--)
        {
            it = vc.end();
            it--;

            ll x = *it;
            it = vc.find(arr[i]);
            vc.erase(it);

            if (x == arr[i])
            {
                for (ll j = i; j <= y; j++)
                {
                    //cout << "a" << endl;
                    cout << arr[j] << " ";
                }
                y = i - 1;
            }
        }
        cout << endl;
    }
}