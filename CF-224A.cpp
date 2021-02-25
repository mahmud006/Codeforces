#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,sum=0;
    cin >> a>>b>>c;
    int mx = max(a, max(b,c));
    for(int i=2; i<mx; i++)
    {
        if(a%i==0 && b%i==0 || b%i==0 && c%i==0 || a%i==0 && c%i==0)
        {
            sum+=i;
        }
    }
    cout << sum*4 <<endl;
}
