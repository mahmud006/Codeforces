#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll b = 2, c = 1, a = n - (b + c);
        while (__gcd(a, b) != c)
        {
            a--;
            b++;
        }
        cout << a << " " << b << " " << c << endl;
    }
}