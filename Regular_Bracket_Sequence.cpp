#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        ll ln = s.size();
        ll c1,c2,c3=0,flg = 0;
        for (ll i = 0; i < ln; i++)
        {
            if (s[i] == '(')
            {
                c1 = i;
            }
            if (s[i] == ')')
            {
                c2 = i;
            }
            if (s[i] == '?')
            {
                c3++;
            }
        }
        ll c4=0, c5=0;
        if(c1<c2)
        {
            if(c3%2==0)
            {
            cout << "YES" <<endl;
            }
            else
            {
                cout << "NO" <<endl;
            }
        }
        else
        {
            if(c3%2==0)
            {
                for(ll i=0; i<c2; i++)
                {
                    if(s[i]=='?')
                    {
                        c4++;
                    }
                }
                 for(ll i=c1+1; i<ln; i++)
                {
                    if(s[i]=='?')
                    {
                        c5++;
                    }
                }
                if(c4>0 && c5>0)
                {
                    cout << "YES" <<endl;
                }
                else
                {
                    //cout << "hnb" <<endl;
                    cout << "NO" <<endl;
                }
            }
            else
            {
                cout << "NO" <<endl;
            }
            
        }
        
    }
}