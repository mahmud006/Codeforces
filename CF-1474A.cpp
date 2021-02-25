#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin>> n;
        string s;
        cin >> s;
        string st;
        ll sum = 0;
        for(ll i=0; i<s.size(); i++)
        {
            if(sum==1)
            {
                if(s[i]=='0')
                {
                    st = st + "0";
                    sum = 0;
                }
                else if(s[i]=='1')
                {
                    st = st + "1";
                    sum = 2;
                }
            }
            else if(sum==0)
            {
                //cout << "j" <<endl;
                if(s[i]=='0')
                {
                    st += "1";
                    sum = 1;
                    //cout << st <<endl;
                }
                else if(s[i]=='1')
                {
                    st = st + "1";
                    sum = 2;
                }
            }
            else if(sum==2)
            {
                if(s[i]=='0')
                {
                    st = st + "1";
                    sum = 1;
                }
                else if(s[i]=='1')
                {
                    st = st + "0";
                    sum = 1;
                }
            }
        }
        //st += "1";
        cout << st<<endl;
    }
}