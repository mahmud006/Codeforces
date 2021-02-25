#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        ll x = 2;
        for(ll i=0; i<n; i++)
        {
            cout << 4*n-x <<" ";
            x+=2;
        }
        cout << endl;
    }
}