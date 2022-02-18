#include <bits/stdc++.h>
using namespace std;
#define ll long long
void fn(ll arr[], ll n, ll a, ll b, ll y)
{
    if (a == y)
    {
        cout << "Alice" << endl;
        return;
    }
    if (b == y)
    {
        cout << "Bob" << endl;
        return;
    }
    n++;
    fn(arr, n, a + arr[n], b, y);
    fn(arr, n, a ^ arr[n], b, y);
    fn(arr, n, a, b + arr[n], y);
    fn(arr, n, a, b ^ arr[n], y);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, x, y;
        cin >> n >> x >> y;
        ll arr[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        fn(arr, 0, x, x + 3, y);
    }
}