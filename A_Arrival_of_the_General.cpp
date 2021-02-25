#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin >> n;
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll mn = INT_MAX, mx = INT_MIN, c1, c2, flg = 0, ans = 0;

    ll chk1;
    for (ll i = 0; i < n; i++)
    {
        if (arr[i] <= mn)
        {
            mn = arr[i];
            c1 = n - i - 1;
            chk1 = i;
        }
    }
    for(ll i=n-1; i>=0; i--)
    {
        if (arr[i] >= mx)
        {
            mx = arr[i];
            c2 = i;
        }
    }
    if (chk1 < c2)
    {
        cout << c1 + c2 - 1 << endl;
    }
    else
    {
        cout << c1 + c2 << endl;
    }
}