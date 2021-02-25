#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b, n;
        cin >> a >> b >> n;
        ll arr[n], brr[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (ll i = 0; i < n; i++)
        {
            cin >> brr[i];
        }
        ll ap = a, hp = b;
        ll c1, c2, c3, flg = 0, mx = 0;
        for (ll i = 0; i < n; i++)
        {
            if (brr[i] % ap == 0)
            {
                c1 = brr[i] / ap;
            }
            else
            {
                c1 = (brr[i] / ap) + 1;
            }
            c2 = c1 * arr[i];
            if (c2 > mx)
            {
                mx = c2;
                c3 = i;
                //cout << arr[i] << endl;
            }
        }
        ll s1 = 0;
        c1 = 0, c2 = 0;
        for (ll i = 0; i < n; i++)
        {
            if (i != c3)
            {
                if (brr[i] % ap == 0)
                {
                    c1 = brr[i] / ap;
                }
                else
                {
                    c1 = (brr[i] / ap) + 1;
                }
                c2 = c1 * arr[i];
                s1 += c2;
                //cout << arr[i] << endl;
            }
        }
        c1 = 0, c2 = 0;
        ll mp;
        //cout << "s:" << s1 << endl;
        if (s1 < hp)
        {
            hp = hp - s1;
            if (brr[c3] % ap == 0)
            {
                c1 = brr[c3] / ap;
            }
            else
            {
                c1 = (brr[c3] / ap) + 1;
            }
            c2 = c1 * arr[c3];
            mp = brr[c3];
            ll f1 = 0, f2 = 0, f3 = 0;
            for (ll i = 0; i < c1; i++)
            {
                hp = hp - arr[c3];
                mp = mp - ap;
                //cout << "h" << hp << endl;
                //cout << "m" << mp << endl;
                if (hp <= 0 && mp <= 0)
                {
                    f1++;
                    break;
                }
                else if (hp <= 0 && mp > 0)
                {
                    f2++;
                    break;
                }
                else if (hp > 0 && mp <= 0)
                {
                    f3++;
                    break;
                }
            }
            if (f2 > 0)
            {
                cout << "NO" << endl;
            }
            else if (f1 > 0 || f3 > 0)
            {
                cout << "YES" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}