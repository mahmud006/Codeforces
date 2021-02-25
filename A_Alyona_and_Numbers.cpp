#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll x,y;
    cin >> x>>y;
    ll chk = x+y, cnt=0;
    for(ll i=5; i<=chk; i+=5)
    {
        if(i<=x && i<=y)
        {
            cnt+=i-1;
        }
        else if(i>x && i>y)
        {
            ll c1 = i-x;
            ll c2 = i-y;
            ll c3 = abs(i-(c1+c2))+1;
            cnt+=c3;
        }
        else
        {
            cnt+= min(i-1, min(x,y));
        }
        //cout << cnt <<endl;
    }
    cout << cnt <<endl;
}