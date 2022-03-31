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
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            st.insert(arr[i]);
        }
        // cout << chk << endl;
        if (n == 1)
        {
            if (arr[0] == 1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            if (st.size() == 1)
            {
                cout << "YES" << endl;
            }
            else
            {
                ll flg = 0, c1 = 0;
                ll chk = *max_element(arr, arr + n);
                for (ll i = 0; i < n; i++)
                {
                    if (arr[i] == chk - 1)
                    {
                        flg++;
                        break;
                    }
                    if (arr[i] == chk)
                    {
                        c1++;
                    }
                }
                if (flg > 0 || c1 > 1)
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
        }
    }
}