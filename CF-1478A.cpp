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
        unordered_map<int, int> mp;
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            mp[arr[i]]++;
        }
        ll mx = 0;
        for (auto x : mp)
        {
            //cout << x.first << " " << x.second << endl; 
            if (x.second > mx)
            {
                mx = x.second;
            }
        }
        cout << mx << endl;
    }
}