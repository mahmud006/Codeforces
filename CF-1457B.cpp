#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll arr[n];
        map<int, int> mp;
        ll mx = 0, chk;
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            mp[arr[i]]++;
            if (mp[arr[i]] > mx)
            {
                mx = mp[arr[i]];
                chk = arr[i];
            }
        }
        //cout << mx <<" " <<chk <<endl;
        //map<int,int>::iterator it;
        ll cnt = 0,ans=INT_MAX;
        for (auto it:mp)
        {
            //cout << it.first <<endl;
            cnt=0;
            for (ll j = 0; j < n; j++)
            {
                if (arr[j] != it.first)
                {
                    //cout <<it.first<< " "<< arr[j] << " ";
                    cnt++;
                    j += k-1;
                }
            }
            //cout << endl;
            //cout << cnt <<endl;
            if(cnt<ans)
            {
                ans = cnt;
                //cnt=0;
            }
        }
        cout << ans << endl;
    }
}