#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        ll x[n];
        for(ll i=0; i<n; i++)
        {
            cin >> x[i];
        }
        ll cnt=0;
        //bool vis[1000];
        set<ll> st;
        for(ll i=0; i<n-1; i++)
        {
            for(ll j=i+1; j<n; j++)
            {
                ll chk = abs(x[i]-x[j]);
                st.insert(chk);
                // if(vis[chk]==0)
                // {
                //     cnt++;
                //     vis[chk] = 1;
                // }
            }
        }
        cout << st.size() <<endl;
    }
}