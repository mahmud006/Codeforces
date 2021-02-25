#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        string s;
        ll cnt=0;
        cin >> s;
        while(1)
        {
            ll c1=0,c2=0;
            for(ll i=0; i<s.size(); i++)
            {
                if(s[i]=='1')
                {
                    c1++;
                }
                if(s[i]=='0')
                {
                    c2++;
                }
            }
            for(ll i=0; i<s.size(); i++)
            {
                if((s[i]=='1' && s[i+1]=='0') || (s[i]=='0' && s[i+1]=='1') )
                {
                    s.erase(i,2);
                    cnt++;
                }
            }
            //cout << s <<endl;
            if(s.empty())
            {
                break;
            }
            //cout << c1 <<" "<<c2<<endl;
            if(c1==0 || c2==0)
            {
                break;
            }
        }
        //cout << cnt <<endl;
        if(cnt%2==0)
        {
            cout << "NET" <<endl;
        }
        else
        {
            cout << "DA" <<endl;
        }
    }
}
