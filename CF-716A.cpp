#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n, c;
    cin >> n >> c;
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll f = 1;
    if (n == 1)
    {
        cout << 1 << endl;
    }
    else
    {

        for (ll i = 0; i < n - 1; i++)
        {
            if (arr[i + 1] - arr[i] > c)
            {
                f = 0;
            }
            f++;
        }
        cout << f << endl;
    }
}