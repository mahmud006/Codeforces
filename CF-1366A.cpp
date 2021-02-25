#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll a,b;
        cin >> a>>b;
        ll mn = min(a,b);
        ll mx = max(a,b);
        if(mx/2 >= mn)
        {
            cout << mn <<endl;
        }
        else
        {
            cout << (a+b)/3 <<endl;
        }
    }
}
