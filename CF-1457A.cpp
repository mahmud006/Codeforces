#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n,m,r,c;
        cin >> n>>m>>r>>c;
        ll chk1 = abs(1-r)+abs(1-c);
        ll chk2 = abs(n-r)+abs(m-c);
        ll chk3 = abs(n-r)+abs(1-c);
        ll chk4 = abs(1-r)+abs(m-c);
        cout << max(max(chk1,chk2),max(chk3,chk4)) <<endl;
        
    }
}