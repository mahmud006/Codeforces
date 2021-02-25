#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,b,d,sum=0,cnt=0;
    cin >> n>>b>>d;
    ll arr[n];
    for(ll i=0; i<n; i++)
    {
        cin >> arr[i];
        if(arr[i]<=b)
        {
            sum+=arr[i];
            if(sum>d)
            {
                cnt++; sum=0;
            }
        }
    }
    cout << cnt <<endl;
}
