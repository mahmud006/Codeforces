#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    ll csum[s.size()], sum = 0;
    for (ll x = 0; x < s.size(); x++)
    {
        sum += ((ll)s[x] - 96);
        csum[x] = sum;
    }
    // for (ll x = 0; x < s.size(); x++)
    // {
    //     cout << csum[x] << endl;
    // }
    for (ll i = 0; i < q; i++)
    {

        ll l, r;
        cin >> l >> r;

        if (l == 1)
        {
            cout << csum[r - 1] - 0 << endl;
        }
        else
        {

            cout << csum[r - 1] - csum[l - 2] << endl;
        }
    }
}