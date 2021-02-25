#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll a, b,x;
        cin >> a>>b;
        x = a%b;
        if(x>0)
            cout << b-x <<endl;
        else
            cout << 0 <<endl;
    }
}
