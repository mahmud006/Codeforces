#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll a, b, c, d;
        cin >> a>>b>>c>>d;
        if(c>b)
        {
            cout << b <<" "<< c<<" " << c<<endl;
        }
        else
        {
            cout << b <<" "<< b<<" " << c<<endl;
        }
    }
}
