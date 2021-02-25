#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        string s;
        cin >> s;
        ll len = s.size();
        ll c1 = 0, c2 = 0, c3 = 0,c4=1, l, r;
        for (ll i = 0; i < len; i++)
        {
            if (s[i] == '1')
            {
                c1++;
                if (c1 == 1)
                {
                    l = i;
                }
                else
                {
                    r = i;
                }
            }
            if (s[i] == '0')
            {
                c3++;
            }
        }

        if (c1 == len || c1==1)
        {
            cout << a << endl;
        }
        else if (c3 == len)
        {
            cout << 0 << endl;
        }
        else
        {
            //cout << l <<r<<endl;
            
            for (ll i = l; i < r; i++)
            {
                if (s[i] == '0')
                {
                    c2++;
                }
                if(s[i]=='1')
                {
                    if(s[i] != s[i+1])
                    {
                        c4++;
                    }
                }
            }
            //cout <<"c4" << c4 <<endl;
            //cout << c2<<endl;
            cout << min(c4 * a, (c2 * b)+a) << endl;
        }
    }
}