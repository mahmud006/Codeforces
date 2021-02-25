#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
    ll n,k,sum=0;
    cin >> n>>k;
    ll arr[n];
    for(ll i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr+n);
    for(ll i=1; i<n; i++)
    {
        sum += (k-arr[i])/arr[0];
    }
    cout << sum <<endl;
    }
}