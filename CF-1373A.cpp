#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll a,b,c,s1,s2;
        cin >> a>>b>>c;
        if(a<c)
        {
            s1 = 1;
        }
        else
        {
            if(a*b<c)
            {
                s1 = a;
            }
            else
            {
                s1 = -1;
            }
        }
        if(c<a)
        {
            s2 = 1;
        }
        else
        {
            if(a*b>c)
            {
                s2 = b;
            }
            else
            {
                s2 = -1;
            }
        }
        cout << s1 << " " <<s2 <<endl;
    }
}
