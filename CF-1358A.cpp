#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n, m;
        cin >> n>>m;
//        if(n%2!=0 && m%2!=0)
//        {
//            cout << n*(m/2)+ceil((float)n/2)<<endl;
//        }
//        else if(n%2==0 && m%2 != 0)
//        {
//            cout << m*(n/2) <<endl;
//        }
//        else
//        {
//            cout << n*(m/2) <<endl;
//        }
        ll x = n*m;
        if(x%2==0)
            cout << x/2 <<endl;
        else
            cout <<(x/2) +1 <<endl;
    }
}
