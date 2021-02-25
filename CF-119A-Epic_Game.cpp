#include<bits/stdc++.h>
using namespace std;
int gcd(int n1, int n2)
{
    int m = min(n1,n2);
    for(int i=m; i>0; i--)
    {
        if(n1%i==0 && n2%i==0)
        {
            return i;
            break;
        }
    }
}
int main()
{
    int a, b,n;
    cin >> a>>b>>n;
    while(1)
    {
        n -= gcd(a, n);
        if(n==0)
        {
            cout << '0' <<endl;
            break;
        }
        n -= gcd(b, n);
        if(n==0)
        {
            cout << '1' <<endl;
            break;
        }
    }
}
