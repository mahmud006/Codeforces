#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n, l;
    cin >> n >> l;
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    float chk1, chk2;
    if (arr[0] == 0)
    {
        chk1 = arr[1] / 2;
    }
    else
    {
        chk1 = arr[0];
    }
    if (arr[n - 1] != l)
    {
        chk2 = l - arr[n - 1];
    }
    ll chk;
    float mx = 0;
    for (ll i = 0; i < n - 1; i++)
    {
        chk = arr[i + 1] - arr[i];
        if (chk > mx)
        {
            mx = chk;
        }
    }
    cout << fixed << setprecision(10) << max(chk2, max(mx / 2, chk1)) << endl;
}