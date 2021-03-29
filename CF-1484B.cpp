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
        set<ll> st;
        ll ch, ch1 = 0, c1 = 0, c2 = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            //st.insert(arr[i]);
            if (i != 0)
            {
                ch1 = arr[i] - ch;
                st.insert(ch1);
            }
            ch = arr[i];
        }
        //cout << ch1 << endl;
        ll c = arr[1] - arr[0];
        ll mx = *max_element(arr, arr + n);
        //cout << mx << endl;
        ll m = 0, f1 = 0;
        // for (ll i = mx + 1; i <= mx * 2 + 1; i++)
        // {
        //     ll cnt = 0;
        //     for (ll j = 1; j < n; j++)
        //     {
        //         if ((arr[j - 1] + c) % i == arr[j])
        //         {
        //             cnt++;
        //         }
        //     }
        //     if (cnt == n - 1)
        //     {
        //         m = i;
        //         if (i == mx * 2 + 1)
        //         {
        //             f1++;
        //         }
        //     }
        // }
        if (st.size() == 1)
        {
            f1++;
        }
        ll chk;
        for (ll i = 0; i < n; i++)
        {
            if (arr[i] == mx)
            {
                chk = (arr[i] - arr[i + 1]) + c;
            }
        }
        ll cnt = 0;
        if (chk > 0)
        {
            for (ll i = 1; i < n; i++)
            {
                if ((arr[i - 1] + c) % chk == arr[i])
                {
                    cnt++;
                }
                if (cnt == n - 1)
                {
                    m = chk;
                }
            }
        }
        if (f1 > 0)
        {
            cout << 0 << endl;
        }
        else if (m == 0)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << m << " " << c << endl;
        }
    }
}