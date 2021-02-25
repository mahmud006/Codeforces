#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin >> n;
    if(n%2 != 0)
    {
        cout << -1 <<endl;
    }
    else
    {
        for(ll i=n; i>0; i--)
        {
            cout << i << " ";
        }
    }
    
}