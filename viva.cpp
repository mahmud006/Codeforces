#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    string s;
    cin >> s;
    ll len = s.size();
    set<string>st;
    for(ll i=1; i<=len; i++)
    {
        for(ll j=0; j<=len-i; j++)
        {
            ll k = j + i -1;
            string str;
            for(ll l=j; l<=k; l++)
            {
                //cout << s[l];
                str += s[l];
            }
    
            //cout <<"st: " << str <<endl;
            ll cnt=0;
            for(ll a=0; a<=len-str.size(); a++)
            {
                ll b;
                for(b=0; b<str.size(); b++)
                {
                    if(s[a+b] != str[b])
                    {
                        break;
                    }
                }
                if(b==str.size())
                {
                    cnt++;
                    b=0;
                }
            }
            if(cnt==2)
            {
                st.insert(str);
            }
        }

    }
    for(auto it:st)
    {
        cout << it <<endl;
    }
}