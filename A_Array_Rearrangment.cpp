#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n,x;
        cin >> n >> x;
        ll arr[n], brr[n];
        for(ll i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        for(ll i=0; i<n; i++)
        {
            cin >> brr[i];
        }
        sort(arr, arr+n);
        sort(brr, brr+n, greater<>());
        ll cnt=0;
        for(ll i=0; i<n; i++)
        {
            if(arr[i]+brr[i]>x)
            {
                cnt++;
            }
        }
        if(cnt>0)
        {
            cout << "No" <<endl;
        }
        else
        {
            cout << "Yes" <<endl;
        }
        
    }
    
}