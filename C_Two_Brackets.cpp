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
        ll cnt = 0;
        ll len = s.size();
        ll c1 = -1, c2 = -1, c3 = -1, c4 = -1;
        ll f1=0,f2=0;
        for (ll i = 0; i<len; i++)
        {
            if (s[i] == '(' && f1==0)
            {
                c1 = i;
                f1++;
            }
            
            if (s[i] == '[' && f2==0)
            {
                c3 = i;
                f2++;
            }
            
        }
        f1=0,f2=0;
        for (ll i = len-1; i>=0; i--)
        {
            if (s[i] == ')' && f1==0)
            {
                c2 = i;
                f1++;
            }
            
            if (s[i] == ']' && f2==0)
            {
                c4 = i;
                f2++;
            }
            
        }
        //cout << c1 <<c2<<c3<<c4<<endl;
        ll cnt1 = 0, cnt2 = 0;
        if (c1 >= 0 && c2 >= 0 && c1<c2)
        {
            
            for (ll i = c1 + 1; i < c2; i++)
            {
                if (s[i] == '(')
                {
                    cnt1++;
                }
                else if (s[i] == ')')
                {
                    cnt2++;
                }
            }
            cnt+=min(cnt1,cnt2)+1;
        }
         ll cnt3 = 0, cnt4 = 0;
        if (c3 >= 0 && c4 >= 0 && c3<c4)
        {
           
            for (ll i = c3 + 1; i < c4; i++)
            {
                if (s[i] == '[')
                {
                    cnt3++;
                }
                else if (s[i] == ']')
                {
                    cnt4++;
                }
            }
            cnt+=min(cnt3,cnt4)+1;
        }
        cout << cnt << endl;
    }
}