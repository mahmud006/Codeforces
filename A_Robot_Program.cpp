#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll x,y;
        cin >> x>>y;
        // ll mn = min(x,y);
        // ll mx = max(x, y);
        // ll chk = mn*2;
        // ll s=0,chk2=0;
        // if(x != y && abs(x-y)>1)
        // {
        //     ll c1 = (mx-mn)-1,c2=0;
        //     if(c1%2==0)
        //     {
        //         c2 = (c1/2)*3;
        //         c1 -= c1/2;
        //     }
        //     else
        //     {
        //         c2 = (c1/2 + 1)*3;
        //         c1 -= (c1/2)+1;
        //     }
            
        //     chk2 = c1+c2;
        // }
        // else if(abs(x-y)==1)
        // {
        //     chk2 = 1;
        // }
        
        // s = chk2+chk;
        // cout <<s <<endl;
        if(abs(x-y)<2)
        {
            cout << abs(x-0)+abs(y-0) <<endl;
        }
        else
        {
            cout << abs(x-0)+abs(y-0)+(abs(x-y)-1) <<endl;
        }
        


    }
}