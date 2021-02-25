#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n,m;
        cin >> n>>m;
        if(n==1)
        {
            cout << 0 <<endl;
        }
        else if(n==2)
        {
            cout << m <<endl;
        }
        else
        {
            cout << 2*m <<endl;
        }
    }
}
