#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin >> n;
    ll arr[n];
    ll c1 = 0, c2 = 0, sum = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2 == 0)
        {
            c2++;
        }
        else
        {
            c1++;
        }
        sum += arr[i];
    }
    if (sum % 2 != 0)
    {
        cout << "First" << endl;
    }
    else
    {
        if (c1 == 0 && c2 == n)
        {
            cout << "Second" << endl;
        }
        else
        {
            cout << "First" << endl;
        }
    }
}