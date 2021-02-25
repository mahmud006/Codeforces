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
        ll s = 0;
        ll sum[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            s+=arr[i];
            sum[i] = s;
        }
        cout << (*min_element(sum, sum+n))*(-1)<<endl;
    }
}
