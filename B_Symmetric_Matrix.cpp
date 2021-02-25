#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n,m;
        cin >> n>>m;
        ll arr[2][2],cnt=0;
        for(ll i=0; i<n; i++)
        {
            for(ll j=0; j<2; j++)
            {
                for(ll k=0; k<2; k++)
                {
                    cin >> arr[j][k];
                }
            }
            if(arr[0][1]==arr[1][0])
            {
                cnt++;
            }
        }
        if(m%2==0 && cnt>0)
        {
            cout << "YES" <<endl;
        }
        else
        {
            cout << "NO" <<endl;
        }
        
    }
}