#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,x;
    cin >> n>>x;
    ll sum = x,cnt=0;
    while(n--)
    {
        char c;
        ll a;
        cin >> c>>a;
        if(c=='+')
        {
            sum+=a;
        }
        else
        {
            sum-=a;
            if(sum<0)
            {
                cnt++;
                sum+=a;
            }
        }
    }
        cout << sum << " " <<cnt <<endl;
}
