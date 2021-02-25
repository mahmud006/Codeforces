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
        ll arr[n],brr[n];
        map<ll,ll>mp;
        for(ll i=0; i<n; i++)
        {
            cin >> arr[i];
            //mp[arr[i]]++;
            brr[i] = arr[i];
        }
        //sort(arr, arr+n);
        ll mx = *max_element(arr, arr+n);
        ll mn = *min_element(arr, arr+n);
        ll chk;
        if(abs(arr[0]-arr[1]) > abs(arr[n-1]-arr[n-2]))
        {
            chk = abs(mx-mn);
        }
        else
        {
            chk = abs(mn-arr[n-2]);
        }
        
        ll ans=chk,flg=0;
        for(ll i=0; i<n-1; i++)
        {
            if(brr[i]==mx)
            {
                ans+=chk;
                flg++;
            }
        }
        if(flg>0)
        {
        cout << ans-chk <<endl;
        }
        else
        {
            cout << ans <<endl;
        }
        
    }
}