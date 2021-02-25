#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n,flag=0,chk=0,x,y,z,mn,idx;
        cin >> n;
        ll arr[n],sum[n];
        for(ll i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        mn = arr[0]+arr[1];
        for(ll i=2; i<n; i++)
        {
            if(mn<=arr[i])
            {
                cout << 1 << " " <<2<<" " <<i+1<<endl;
                flag++;
                break;
            }
        }
        if(flag==0)
        {
            cout << -1 <<endl;
        }
    }
}
