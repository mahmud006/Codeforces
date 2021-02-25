#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    ll n;
    cin >> n;
    if(n>=0)
    {
        cout << n<<endl;
    }
    else
    {
        ll c1 = n%10;
        ll c2 = n-c1;
        ll c3 = c2/10;
        ll c4 = c3%10;
        ll c5 = c3-c4;
        ll c6 = c5/10;
        ll c7 = (c6*10)+c1;
        //cout << c7 <<endl;
        cout << max(c7,c3) <<endl; 
    }
    
}