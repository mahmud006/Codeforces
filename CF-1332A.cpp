#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll a,b,c,d;
        cin >> a>>b>>c>>d;
        ll x,y,x1,y1,x2,y2;
        cin >> x>>y>>x1>>y1>>x2>>y2;
        ll xline,yline;
        xline = max(x1,x2)-min(x1,x2);
        yline = max(y1,y2)-min(y1,y2);
        ll chk1 = abs(a-b);
        ll chk2 = abs(c-d);
        if(chk1<xline/2 && chk2<yline/2)
        {
            cout << "YES" <<endl;
        }
        else
        {
            cout << "NO" <<endl;
        }
    }
}
