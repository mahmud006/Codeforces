#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n,sum=0;
        cin>>n;
        ll arr[n];
        for(ll i=1; i<=n/2; i++)
        {
            sum += pow(2, i);
        }
        cout << sum <<endl;
    }
}
