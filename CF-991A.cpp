#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,n,check;
    cin >> a>>b>>c>>n;
    check = (a+b)-c;
    if(a>=c && b>= c)
    {
        if(check<n)
        {
            cout << n-check <<endl;
        }
        else
        {
            cout << -1 <<endl;
        }
    }
    else
    {
        cout << -1 <<endl;
    }
}
