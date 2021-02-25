#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,a,b,c,d,flag=0;
        cin >> n>>a>>b>>c>>d;
        int w,x,y,z;
        w = a-b;
        x = a+b;
        y = c-d;
        z = c+d;
        int p = n*w;
        int q = n*x;
        if((p>=y && p<=z) || (q>=y && q<=z))
        {
            flag++;
        }
        else if((y>=p && y<=q) || (z>=p && z<=q))
        {
            flag++;
        }
        if(flag>0)
        {
            cout << "Yes" <<endl;
        }
        else
        {
            cout << "No" <<endl;
        }
    }
}
