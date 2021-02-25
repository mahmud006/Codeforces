#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        ll ln = s.size();
        ll c1 = 0;
        for(ll i=n-1; i>=0; i--)
        {
            if(s[i]==')')
            {
                c1++;
            }
            else
            {
                break;
            }
            
        }
        ll chk = ln - c1;
        if(c1>chk)
        {
            cout << "Yes" <<endl;
        }
        else
        {
            cout << "No" <<endl;
        }
        
    }
    
    
}