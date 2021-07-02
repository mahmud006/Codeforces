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
        ll sum = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            //sum += arr[i];
        }
        sort(arr, arr + n);
        //ll chk = sum / n;
        ll m = 0;
        //cout << chk << endl;
        for (ll i = 0; i < n; i++)
        {
            sum += arr[i];
            ll chk1 = sum / (i + 1);

            if (arr[i] > chk1)
            {
                m++;
            }
        }
        cout << m << endl;
    }
}