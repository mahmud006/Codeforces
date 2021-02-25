#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long
//ll rec(ll n)
//{
//    if(n==1)
//    {
//        return 0;
//    }
//    else
//    {
//        return ((n*2)+((n-2)*2))*((ll)n/2)+rec(n-2);
//    }
//}
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n,sum=0;
        cin >> n;
        //cout << rec(n)<<endl;
        for(ll i=3; i<=n; i+=2)
        {
            sum +=((i*2)+((i-2)*2)) * (i/2);
        }
        cout << sum <<endl;
    }
}
