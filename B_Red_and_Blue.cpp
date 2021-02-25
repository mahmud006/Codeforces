#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll r[n];
        ll s1=0,mx1=0;
        for(ll i=0; i<n; i++)
        {
            cin >> r[i];
            s1 += r[i];
            //sm1[i] = s1;
            if(s1>mx1)
            {
                mx1 = s1;
            }
        }
        ll m;
        cin >> m;
        ll b[m];
        ll s2=0,mx2=0;
        for(ll i=0; i<m; i++)
        {
            cin >> b[i];
            //sm2[i]
            s2+=b[i];
            if(s2>mx2)
            {
                mx2 = s2;
            }
        }
        cout << mx1 + mx2 <<endl;
    }
}