#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;
    cin >> n;
    ll arr[n], brr[n];
    ll sum = 0, cnt = 0, c1 = 0, s1 = 0, j = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] >= 0)
        {
            s1 += arr[i];
            c1++;
        }
        else
        {
            brr[j] = arr[i];
            j++;
        }
    }
    //ll len = sizeof(brr);
    sort(brr, brr + j, greater<>());
    for (ll i = 0; i < j; i++)
    {
        if (s1 + brr[i] >= 0)
        {
            s1 += brr[i];
            cnt++;
        }
    }
    cout << c1 + cnt << endl;
}