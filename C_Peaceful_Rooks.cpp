#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n,m,sum=0;
        cin >> n>>m;
        for(ll i=0; i<m; i++)
        {
            ll x, y;
            cin >> x >> y;
            ll c1 = abs(x-y);
            sum += c1;
        }
        cout << sum <<endl;
        
    }
}