#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define M 10
ll modexpo(ll a, ll b)
{
    if(b==1) return a;
    if(b==0) return 1;
    if(b%2==0)
    {
        ll res = (modexpo(a, b/2)) % M;
        return (res*res)%M;
    }
    if(b%2 != 0)
    {
        return (a%M * modexpo(a, b-1)%M)%M;
    }
    return 0;
}

int main()
{
    ll n;
    cin >> n;
    ll x = 1378;
    cout << modexpo(x, n)%M <<endl;
}