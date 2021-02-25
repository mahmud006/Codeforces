#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin >> n;
    ll arr[n][3];
    ll c1=0,c2=0,c3=0;
    for(ll i=0; i<n; i++)
    {
        for(ll j=0; j<3; j++)
        {
            cin>>arr[i][j];
            if(j==0)
            {
                c1 += arr[i][j];
            }
            else if(j==1)
            {
                c2 += arr[i][j];
            }
            else if(j==2)
            {
                c3 += arr[i][j];
            }
        }
    }
    if(c1==0 && c2==0 && c3==0)
    {
        cout << "YES" <<endl;
    }
    else
    {
        cout << "NO" <<endl;
    }
    

}