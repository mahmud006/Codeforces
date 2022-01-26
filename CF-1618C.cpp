#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll> divisors1;
vector<ll> divisors2;
void sieve1(int n)
{
    for (int i = 2; i <= n; i++)
    {
        for (int j = i; j <= n; j += i)
        {
            divisors1.push_back(i);
        }
    }
}
void sieve2(int n)
{
    for (int i = 2; i <= n; i++)
    {
        for (int j = i; j <= n; j += i)
        {
            divisors2.push_back(i);
        }
    }
}
int gcd(int x, int y)
{
    if (x == 0 || y == 0)
        return max(x, y);
    while (true)
    {
        if (x % y == 0 || y % x == 0)
            break;
        if (x > y)
        {
            x = x % y;
        }
        else
        {
            y = y % x;
        }
    }
    return min(x, y);
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll arr[n], brr[n], crr[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        ll j = 0;
        for (ll i = 0; i < n; i += 2)
        {
            sieve1(arr[i]);
            brr[j] = arr[i];
        }
        ll k = 0;
        for (ll i = 1; i < n; i += 2)
        {
            sieve2(arr[i]);
            crr[k] = arr[i];
        }
    }
}