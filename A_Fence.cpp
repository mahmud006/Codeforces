#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll a,b,c,d;
        cin >> a>>b>>c;
        d = max(a,max(b,c));
        cout << d <<endl;
    }
}