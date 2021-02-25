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
        ll arr[n * k];
        for (ll i = 0; i < n * k; i++)
        {
            cin >> arr[i];
        }
        ll chk;
        chk = n / 2 + 1;
        //cout << chk <<endl;
        ll s = 0;
        sort(arr, arr + n * k, greater<>());
        ll cnt = 0;
        for (ll i = chk - 1; i < n * k; i += chk)
        {
            //cout << arr[i] <<endl;

            s += arr[i];
            cnt++;
            if (cnt == k)
            {
                break;
            }
        }
        cout << s << endl;
    }
}