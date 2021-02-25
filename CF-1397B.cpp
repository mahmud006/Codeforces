#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin >> n;
    ll arr[n];
    for(ll i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr+n);
    for(ll i=0; i<n; i++)
    {
        cout <<arr[i]<<endl;
    }
    ll chk = sqrt(arr[n-1]);
    ll x = chk + 1;
    ll chk1 = arr[n-1]-(chk*chk);
    ll chk2 = arr[n-1]-(x*x);
    ll sum = 0;
    for(ll i=1; i<=n; i++)
    {
        sum+= arr[i]-i;
    }
    cout <<
}
