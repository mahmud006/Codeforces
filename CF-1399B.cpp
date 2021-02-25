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
        ll arr[n],brr[n],sum=0;
        for(ll i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        for(ll i=0; i<n; i++)
        {
            cin >> brr[i];
        }
        ll arrmin = *min_element(arr, arr+n);
        ll brrmin = *min_element(brr, brr+n);
        for(ll i=0; i<n; i++)
        {
            sum += max((arr[i]-arrmin), (brr[i]-brrmin));
        }
        cout << sum <<endl;
    }
}
