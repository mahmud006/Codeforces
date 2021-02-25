#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        ll arr[n][m];
        ll s=0,mn=100007,cnt=0;
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < m; j++)
            {
                cin >> arr[i][j];
                if(arr[i][j]<0)
                {
                    cnt++;
                    s+=arr[i][j]*-1;
                    if(arr[i][j]*-1 < mn)
                    {
                        mn = arr[i][j]*-1;
                    }
                }
                else
                {
                    s+=arr[i][j];
                    if(arr[i][j] < mn)
                    {
                        mn = arr[i][j];
                    }
                }
            }
        }
        if(cnt%2==0)
        {
            cout << s <<endl;
        }
        else
        {
            cout << s - (mn*2) <<endl;
        }
        
        
    }
}