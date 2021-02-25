#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll a,b;
        cin >> a>>b;
        ll chk = abs(a-b);
        if(chk%10==0)
        {
            cout << chk/10 <<endl;
        }
        else
        {
            cout << (chk/10)+1 <<endl;
        }
    }
}
