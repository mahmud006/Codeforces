#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll a,b,c,d,sum=0;
        cin >> a>>b>>c>>d;
        if(a<=b)
        {
            cout << b <<endl;
        }
        else
        {
            if(c<=d)
            {
                cout << -1 <<endl;
            }
            else
            {
                sum += b;
//                a-=b;
//                while(a>0)
//                {
//                    sum += c;
//                    a -= c-d;
//                }
//                cout << sum <<endl;
                a -= b;
                ll chk = ceil((double)a/(double)(c-d));
                sum += chk * c;
                cout << sum <<endl;
            }
        }
    }
}
