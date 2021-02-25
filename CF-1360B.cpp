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
        sort(arr, arr+n);
        ll mn = 1001,chk;
        for(ll i=0; i<n-1; i++)
        {
            chk = abs(arr[i]-arr[i+1]);
            if(chk < mn)
            {
                mn = chk;
            }
        }
        cout << mn <<endl;
    }
}
