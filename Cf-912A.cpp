#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll a,b,x,y,z,sum=0;
    cin >> a>>b>>x>>y>>z;
    ll x1 = x*2;
    ll y1 = y;
    ll y2 = y;
    ll z1 = z*3;
    ll res1 = (x1+y1)-a;
    ll res2 = (y2+z1)-b;
    if(res1>=0)
    {
        sum += res1;
    }
    if(res2>=0)
    {
        sum += res2;
    }
    cout << sum <<endl;
}
