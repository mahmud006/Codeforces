#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin >> a>>b>>c;
    int d1,d2,d3;
    d1 = a/1;
    d2 = b/2;
    d3 = c/4;
    int m = min(min(d1, d2), d3);
    if(d1+d2+d3>=3)
    {
        cout << m*1+m*2+m*4 <<endl;
    }
    else
    {
        cout << "0" <<endl;
    }
}
