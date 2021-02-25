#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        ll cnt=0;
        for(ll i=0; i<s.size(); i++)
        {
            if(s[i]=='(')
            {
                for(ll j=i+1; j<s.size(); j++)
                {
                    if(s[j]==')')
                    {
                        cnt++;
                        s[j] = 'a';
                    }
                }
            }
            if(s[i]=='[')
            {
                for(ll j=i+1; j<s.size(); j++)
                {
                    if(s[j]==']')
                    {
                        cnt++;
                        s[j] = 'a';
                    }
                }
            }
        }
        cout << cnt <<endl;
    }
}