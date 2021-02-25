#include<bits/stdc++.h>
using namespace std;
int luckynumber(int n)
{
    int rem, flag=0;
    while(n>0)
    {
        rem = n%10;
        if(rem!=4 && rem!=7)
        {
            flag++;
        }
        n = n/10;
    }
    if(flag>0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main()
{
    int n,flag=0;
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        if(n%i == 0 && luckynumber(i)==1)
        {
            flag++;
        }
    }
    if(flag>0)
    {
        cout << "YES" <<endl;
    }
    else
    {
        cout << "NO" <<endl;
    }
}
