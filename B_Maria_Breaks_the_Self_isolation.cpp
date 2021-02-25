#include<bits/stdc++.h>
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
        ll arr[n];
        for(ll i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        sort(arr,arr+n);
        ll cnt=1;
        for(ll i=0; i<n; i++)
        {
            if(arr[i]<=i+1)
            {
                cnt = i+2;
            }
        }
        cout << cnt <<endl;
    }

}