#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin >> n;
    if(n==1 || n==2)
    {
        cout << 4 <<endl;
    }
    else if(n==3)
    {
        cout << 12 <<endl;
    }
    else
    {
        if(n%2==0)
        {
            cout << (n+1)*(n+1) <<endl;
        }
        else
        {
            if(n==5)
            {
                cout << 37 <<endl;
            }
            else
            {
            
            if((n-1)%3==0)
            {
            cout << (n*n)+8+((n-1)/3)*4 <<endl;
            }
            else
            {
                cout << (n*n)+8+(((n-1)/3)+1)*4 <<endl;
            }
            
            }
        }
        
    }
    
    
}