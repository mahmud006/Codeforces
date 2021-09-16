#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, a, b;
        string s;
        cin >> n >> a >> b;
        cin >> s;
        ll c0 = 0, c1 = 0, cnt = 0, cnt1 = 0;
        ll arr[n], j = 0, brr[n], k = 0;
        for (ll i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
            {
                c1++;
                cnt1++;
                if (cnt > 0)
                {
                    arr[j] = cnt;
                    cnt = 0;
                    j++;
                }
            }
            else if (s[i] == '0')
            {
                c0++;
                cnt++;
                if (cnt1 > 0)
                {
                    arr[k] = cnt1;
                    cnt1 = 0;
                    k++;
                }
            }
        }
        // for (ll i = 0; i < j; i++)
        // {
        //     cout << arr[i] << " ";
        // }

        ll ans = 0;
        if (a < 0)
        {
            //cout << c0 << endl;
            if ((a + b) > 0)
            {
                cout << n * (a + b) << endl;
            }
            else
            {

                if (c0 < c1)
                {
                    for (ll i = 0; i < j; i++)
                    {
                        ans += arr[i] * a + b;
                    }
                    ans += c1 * a + b;
                    cout << ans << endl;
                }
                else
                {
                    for (ll i = 0; i < k; i++)
                    {
                        ans += brr[i] * a + b;
                    }
                    ans += c0 * a + b;
                    cout << ans << endl;
                }
            }
        }
        else if (b < 0)
        {
            if ((a + b) > 0)
            {
                cout << n * (a + b) << endl;
            }
            else
            {

                if (c0 < c1)
                {
                    for (ll i = 0; i < j; i++)
                    {
                        ans += arr[i] * a + b;
                    }
                    ans += c1 * a + b;
                    cout << ans << endl;
                }
                else
                {
                    for (ll i = 0; i < k; i++)
                    {
                        ans += brr[i] * a + b;
                    }
                    ans += c0 * a + b;
                    cout << ans << endl;
                }
            }
        }
        else
        {
            cout << (a * n) + b << endl;
        }
    }
}