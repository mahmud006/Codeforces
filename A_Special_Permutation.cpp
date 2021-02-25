#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        if(n%2==0)
        {
        for (ll i = n; i > 0; i--)
        {
            cout << i << " ";
        }
        cout << endl;
        }
        else
        {
            for (ll i = n; i > 0; i--)
        {
            if(n/2+1 !=i)
            cout << i << " ";
        }
        cout << n/2+1 <<endl;
        }
        
    }
}