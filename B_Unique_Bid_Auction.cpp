#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll arr[n];
        map<int,int>mp;
        for(ll i=0; i<n; i++)
        {
            cin >> arr[i];
            mp[arr[i]]++;
        }
        ll mn = INT_MAX,ans,flg=0;
        for(auto i:mp)
        {
            if(i.second == 1)
            {
                if(i.first<mn)
                {
                    mn = i.first;
                    flg++;
                }
            }
        }
        if(flg>0)
        {
        //cout << distance(mp.begin(),mp.find(mn)) <<endl;
        for(ll i=0; i<n; i++)
        {
            if(arr[i]==mn)
            {
                cout << i+1 <<endl;
                break;
            }
        }
        }
        else
        {
            cout << -1 <<endl;
        }
        

    }
}