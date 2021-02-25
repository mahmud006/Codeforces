#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool vis[1000000];
int main()
{
    ll n,m;
    cin >> n>>m;
    ll arr[n],brr[m];
    for(ll i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    for(ll i=0; i<m; i++)
    {
        cin >> brr[i];
    }
    ll cnt=0;
    ll crr[n];
    for(ll i=n-1; i>=0; i--)
    {
        //cout << "a " <<arr[i] <<endl;
        if(vis[arr[i]] == 0)
        {
            cnt++;
            crr[i] = cnt;
            vis[arr[i]]=1;
            //cout <<i << " "<< crr[i] <<endl;
        }
        else
        {
            crr[i] = cnt;
            //cout <<i <<" " << crr[i] <<endl;
        }
        
    }
    for(ll i=0; i<m; i++)
    {
        cout << crr[brr[i]-1] <<endl;
    }
}