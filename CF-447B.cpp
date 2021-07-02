#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    string s;
    cin >> s;
    ll k;
    cin >> k;
    ll w[26];
    ll mx = 0;
    for (ll i = 0; i < 26; i++)
    {
        cin >> w[i];
        if (w[i] > mx)
        {
            mx = w[i];
        }
    }
    ll sum = 0, chk;
    for (ll j = 0; j < s.size(); j++)
    {
        sum += w[(ll)(s[j] - 96) - 1] * (j + 1);
        //cout << sum << endl;
        chk = j + 1;
    }
    //cout << chk << endl;
    chk = chk + 1;
    //cout << k << endl;
    while (k--)
    {
        //cout << k << endl;
        sum += (mx * chk);
        chk++;
        //cout << sum << endl;
    }
    cout << sum << endl;
}
