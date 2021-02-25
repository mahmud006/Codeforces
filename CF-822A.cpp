#include<bits/stdc++.h>
using namespace std;
#define ll int
ll fact(ll a)
{
    if(a>1)
    {
        return a*fact(a-1);
    }
    else
        return 1;
}

int main()
{
    ll a, b;
    cin >> a>> b;
    cout << fact(min(a,b)) <<endl;
}
