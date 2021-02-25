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
        set<int> st;
        map<int, int> cnt;
        ll mn = INT_MAX, chk;
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (ll i = 0; i < n; i++)
        {
            for(ll j=i+1; j<n; j++)
             {
                 if(arr[i] ==arr[j] && arr[j] != arr[i+1])
                 {
                     cnt[arr[i]]++;
                     //i = j;
                 }
             }
        }
        for(auto i:cnt)
        {
            cout << i.first <<" " << i.second <<endl;
        }
        
    }
}