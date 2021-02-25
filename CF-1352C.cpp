#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n,k,chk;
        cin >> n>>k;
        chk = k/(n-1);
        if(k%(n-1)==0)
        {
            cout << (n*chk)-1<<endl;
        }
        else
        {
            cout << (n*chk) + (k%(n-1))<<endl;
        }
    }
}
