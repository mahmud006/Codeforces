#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,sum=0;
    cin >> n;
    ll arr[n],csum[n],x[n],y[n];
    for(ll i=0; i<n; i++)
    {
        cin >> arr[i];
        sum +=arr[i];
        csum[i] = sum;
    }
    y[0] = 0;
    ll mx = 0;
    for(ll i=1; i<n; i++)
    {
        if(csum[i-1]>mx)
            mx = csum[i-1];

        y[i] = mx;
    }
    for(ll i=0; i<n; i++)
    {
        cout << arr[i] + y[i] <<" ";
    }
}
