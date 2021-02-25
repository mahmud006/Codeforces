#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll a,b,x,y,n;
        cin >> a>>b>>x>>y>>n;
        if(a<b)
        {
            if(abs((a-x)-n) <= abs((b-y)-n))
            {
                ll c1 = a-x;
                if(c1<n)
                {
                    a -=c1;
                    n -=c1;
                    b -=n;
                    cout << a*b <<endl;
                }
                else
                {
                    if(a-n > 0)
                    {
                        a -=n;
                    }
                    else
                    {
                        a=x;
                    }
                    cout << a*b <<endl;

                }
            }
            else
            {
                ll c1 = b-y;
                if(c1<n)
                {
                    b -=c1;
                    n -=c1;
                    if(a-n > 0)
                    {
                        a -=n;
                    }
                    else
                    {
                        a=x;
                    }
                    cout << a*b <<endl;
                }
                else
                {
                    if(b-n > 0)
                    {
                        b -=n;
                    }
                    else
                    {
                        b=y;
                    }
                    cout << a*b <<endl;
                }
            }
        }
        else if(a>b)
        {
            if(a-x <= b-y)
            {
                ll c1 = a-x;
                if(c1<n)
                {
                    a -=c1;
                    n -=c1;
                    b -=n;
                    cout << a*b <<endl;
                }
                else
                {
                    if(a-n > 0)
                    {
                        a -=n;
                    }
                    else
                    {
                        a=x;
                    }
                    cout << a*b <<endl;

                }
            }
            else
            {
                ll c1 = b-y;
                if(c1<n)
                {
                    b -=c1;
                    n -=c1;
                    if(a-n > 0)
                    {
                        a -=n;
                    }
                    else
                    {
                        a=x;
                    }
                    cout << a*b <<endl;
                }
                else
                {
                    if(b-n > 0)
                    {
                        b -=n;
                    }
                    else
                    {
                        b=y;
                    }
                    cout << a*b <<endl;
                }
            }
        }
        else
        {
            if(a-x >= b-y)
            {
                ll c1 = a-x;
                if(c1<n)
                {
                    a -=c1;
                    n -=c1;
                    if(b-n > 0)
                    {
                        b -=n;
                    }
                    else
                    {
                        b=x;
                    }
                    cout << a*b <<endl;
                }
                else
                {
                    if(b-n > 0)
                    {
                        b -=n;
                    }
                    else
                    {
                        b=x;
                    }
                    cout << a*b <<endl;

                }
            }
            else
            {
                ll c1 = b-y;
                if(c1<n)
                {
                    b -=c1;
                    n -=c1;
                    if(a-n > 0)
                    {
                        a -=n;
                    }
                    else
                    {
                        a=x;
                    }
                    cout << a*b <<endl;
                }
                else
                {
                    if(b-n > 0)
                    {
                        b -=n;
                    }
                    else
                    {
                        b=y;
                    }
                    cout << a*b <<endl;
                }
            }
        }
    }
}
