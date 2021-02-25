#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll a,b,mn,mx;
        cin >> a>>b;
        mn = min(a,b);
        mx = max(a,b);
        if(2*mn >= mx)
        {
            cout << (2*mn)*(2*mn) <<endl;
        }
        else
        {
            cout << mx*mx <<endl;
        }
    }
}
