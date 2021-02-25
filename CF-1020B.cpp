#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin >> n;
    ll arr[n];
    for (ll i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    for (ll i = 1; i <= n; i++)
    {
        ll flg = 0;
        unordered_map<int, int> mp;
        ll y = i;
        while (1)
        {
            mp[y]++;
            //cout << "i " << y << endl;
            for (auto x : mp)
            {
                if (x.second == 2)
                {
                    //cout << i << endl;
                    cout << x.first << " ";
                    flg++;
                    break;
                }
            }
            if (flg > 0)
            {
                //i = i + 1;
                break;
            }
            y = arr[y];
        }
        mp.clear();
    }
}