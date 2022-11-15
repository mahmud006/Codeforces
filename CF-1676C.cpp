#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        ll chk, ans = INT_MAX;
        int arr[n];
        string s[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> s[i];
        }
        ll f1 = 0;
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < n; j++)
            {
                if (i != j)
                {
                    f1 = 0;
                    for (ll k = 0; k < s[j].size(); k++)
                    {
                        f1 += abs(s[i][k] - s[j][k]);
                    }
                    // cout << f1 << " ";
                    //  chk = abs(arr[i] - arr[j]);
                    ans = min(f1, ans);
                    // cout << chk << " ";
                    // cout << endl;
                }
            }
            // cout << endl;
        }
        cout << ans << endl;
    }
}