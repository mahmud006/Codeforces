#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n,x,ans1=0,ans2=0;
        cin >> n>>x;
        ll arr[n],csum[n],sum=0,flg=0;
        for(ll i=0; i<n; i++)
        {
            cin >> arr[i];
            sum+=arr[i];
            csum[i] = sum;
        }
        if(sum%x != 0)
        {
            cout << n <<endl;
            flg++;
        }
        else
        {
            for(ll i=0; i<n; i++)
            {
                if((sum-csum[i])%x != 0)
                {
                    ans1= n-i-1;
                    flg++;
                    break;
                }
            }
            for(ll i=n-1; i>=0; i--)
            {
                if(csum[i]%x != 0)
                {
                    ans2= i+1;
                    flg++;
                    break;
                }
            }
            if(flg>0)
            {
                cout << max(ans1,ans2) <<endl;
            }
            else
            {
                cout << -1 <<endl;
            }
        }
    }
}
