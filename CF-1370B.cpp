#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n,c1=0,c2=0,cnt=0;
        cin >> n;
        ll arr[n*2];
        for(ll i=0; i<n*2; i++)
        {
            cin >> arr[i];
        }
        for(ll i=0; i<n*2; i++)
        {
            for(ll j=i+1; j<n*2; j++)
            {
                if(arr[i]>0 && arr[j]>0)
                {
                    ll chk = arr[i]+arr[j];
                    if(chk%2==0)
                    {
                        cout << i+1 <<" " << j+1 <<endl;
                        arr[i] = 0;
                        arr[j] = 0;
                        cnt++;
                        break;
                    }
                }
            }
            if(cnt==n-1)
            {
                break;
            }
        }
    }
}
