#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n, m, a, b;
    cin >> n >> m >> a >> b;
    // cout << b / m << endl;
    ll r1 = n * a;
    ll r2 = (n / m) * b + min((n % m) * a, b);

    cout << min(r1, r2) << endl;
}