#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n,m;
        cin >> n >> m;
        ll arr[n];
        for(ll i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        set<ll>st;
        for(ll i=0; i<n; i++)
        {
            if(arr[i]%m==0) continue;
            st.insert(arr[i]);
        }
        if(st.size()==0)
        {
            //cout << 1 <<endl;
            ll x = n;
            for(ll i=0; i<n-1; i++)
            {
                for(ll j=i+1; j<n; j++)
                {
                    if((arr[i]+arr[j])%m==0)
                    {
                        x--;
                    }
                }
            }
            cout << x <<endl;
        }
        else
        {
        cout << st.size() <<endl;
        }
    }   
}