#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll p,f;
        cin >> p>>f;
        ll cs, cw;
        cin >> cs >> cw;
        ll s,w;
        cin >> s>>w;
        while(1)
        {
            if(p==0 || cs==0)
            {
                break;
            }
            chk = 1*s;
            cs--;
            p -=chk;
            cnt++;
        }
    }
}
