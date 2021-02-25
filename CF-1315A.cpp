#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a,b,x,y,c1,c2,c3,c4,mx;
        cin >> a>>b>>x>>y;
        c1 = a*y;
        c2 = b*x;
        c3 = a * (b-(y+1));
        c4 = b * (a-(x+1));
        mx = max(max(c1,c2), max(c3,c4));
        cout << mx <<endl;
    }
}
