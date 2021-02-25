#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll arr[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        //ll *mx = max_element(arr,arr+n);
        //ll *mn = min_element(arr,arr+n);

        sort(arr, arr + n, greater<>());
        ll mx = arr[0];
        ll mn = arr[n - 1];
        if (k > 0)
        {
            for (ll i = 1; i < n; i++)
            {
                if(k==0)
                {
                    break;
                }
                mx += arr[i];
                k--;
            }
            cout << mx <<endl;
        }
        else
        {
            cout << mx - mn << endl;
        }
    }
}