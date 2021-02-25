#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n,x,m;
        cin >> n>>x>>m;
        ll lb = x, ub=x,chk=0;
        for(ll i=0; i<m; i++)
        {
            ll l,r;
            cin >> l>>r;
            if(lb>=l || ub<=r)
            {
                ll chk2 = abs(l-r);
                if(chk2>chk)
                {
                chk = chk2;
                lb = l;
                ub = r;
                }

            }
        }
        cout << chk+1 <<endl;
    }
}
