#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long x,y,a,b,sum=0;
        cin >> x>>y>>a>>b;
//        sum += min(x,y)*min(2*a, b);
//        sum += (max(x,y)-min(x,y))*min(a,b);
//        cout << sum <<endl;
        if(2*a<=b)
        {
            sum += (x+y)*a;
        }
        else
        {
            sum += min(x,y)*b;
            if(x>y)
            {
                x -= y;
                sum += x*a;
            }
            else if(y>x)
            {
                y -= x;
                sum += y*a;
            }
        }
        cout << sum <<endl;
    }
}
