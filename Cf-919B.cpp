#include<bits/stdc++.h>
using namespace std;
int sum(int n)
{
    int s=0,m;
    while(n>0)
    {
        m=n%10;
        s=s+m;
        n=n/10;
    }
    return s;
}
int main()
{
    int k,j,i;
    cin >> k;
    for(i=1, j=1; i<=k; j+=9)
    {
        int x = sum(j);
        if(x==10)
        {
            i++;
        }
    }
    cout << j-9 <<endl;
}
