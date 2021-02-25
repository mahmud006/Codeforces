#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a1,a2,a3,a4,x,y,sum;
    cin >> a1>>a2>>a3>>a4;
    sum = a1+a2+a3+a4;
    x = min(min(a1,a2),min(a3,a4));
    y = max(max(a1,a2),max(a3,a4));
    if(sum-(x+y)==(x+y))
    {
        cout << "YES" <<endl;
    }
    else if(sum-y==y)
    {
        cout << "YES" <<endl;
    }
    else
    {
        cout << "NO" <<endl;
    }
}
