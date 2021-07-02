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
        vector<ll> st1;
        ll flg = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            st1.push_back(arr[i]);
            st.insert(arr[i]);
            if (arr[i] < 0)
            {
                flg++;
            }
        }

        ll cnt = 0;
        for (ll i = 0; i < n; i++)
        {
            for (ll j = i + 1; j < n; j++)
            {
                ll chk = abs(arr[i] - arr[j]);
                if (chk == 0)
                    continue;
                st1.push_back(chk);
                cnt++;
            }
        }
        if (flg > 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            for (ll i = 0; i < st1.size(); i++)
            {
                for (ll j = i + 1; j < st1.size(); j++)
                {
                    //cout << st1[i] << endl;
                    ll chk1 = abs(st1[i] - st1[j]);
                    if (chk1 == 0)
                        continue;
                    st.insert(chk1);
                    //cout << "s" << endl;
                }
                //cout << st1[i] << endl;
            }
            cout << st.size() << endl;
            for (auto x : st)
            {
                cout << x << " ";
            }
            cout << endl;
        }
    }
}
