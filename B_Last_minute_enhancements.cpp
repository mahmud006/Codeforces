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
        map<int, int> mp;
        map<int, int>::iterator it;
        set<int> st;
        //set<int>::iterator it;
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            mp[arr[i]]++;
            st.insert(arr[i]);
        }
        ll cnt = 0;
        for (it = mp.begin(); it != mp.end(); it++)
        {
            if (it->second > 1)
            {
                cnt++;
            }
        }
        //cout << st.size() <<endl;
        // for(ll i=0; i<x-1; i++)
        // {
        //     ll chk = abs(brr[i]-brr[i+1]);
        //     if(chk==1)
        //     {
        //         cnt--;
        //     }
        // }
        for (ll i = 0; i < n - 1; i++)
        {
            ll chk = abs(arr[i]-arr[i+1]);
            if(chk==1 && (mp[arr[i]]>1 && mp[arr[i+1]]>1))
            {
                cnt--;
            }
        }
        cout << st.size()+cnt <<endl;
        // cout << st.size()+f1 <<endl;
        // ll cnt;
        // //cout << "m" <<mp[arr[n-2]] <<endl;
        // if (mp[arr[n - 2]] > 1)
        // {
        //     cnt = 1;
        // }
        // else
        // {
        //     cnt = 0;
        // }
        // ll flg = 0;
        // for (ll i = 0; i < n - 1; i++)
        // {
        //     ll chk = abs(arr[i] - arr[i + 1]);
        //     if (chk > 1)
        //     {
        //         cnt++;
        //         flg++;
        //     }
        // }

        // if (flg > 0)
        // {
        //     cout << st.size() + cnt << endl;
        // }
        // else
        // {
        //     if (n == 1)
        //     {
        //         cout << 1 << endl;
        //     }
        //     else
        //     {

        //         cout << st.size() + 1 << endl;
        //     }
        // }
        // ll cnt=0;
        // for(ll i=0; i<n; i++)
        // {
        //     if(arr[i]==arr[i-1])
        //     {
        //         arr[i]++;
        //     }
        //}
    }
}