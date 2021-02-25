#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n,q;
        cin >> n>>q;
        string s;
        cin >> s;
        for(ll i=0; i<q; i++)
        {
            ll l,r;
            cin >> l>>r;
            char c1 = s[r-1];
            ll flg=0;
            for(ll i=r; i<s.size(); i++)
            {
                if(s[i]==c1)
                {
                    flg++;
                    break;
                }
            }
            char c2 = s[l-1];
            for(ll i=0; i<l-1; i++)
            {
                if(s[i]==c2)
                {
                    flg++;
                    break;
                }
            }
            if(flg>0)
            {
                cout << "YES" <<endl;
            }
            else
            {
                cout << "NO" <<endl;
            }
            
        }
        
    }
}