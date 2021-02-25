#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll gcd(ll a, ll b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
ll lcm(ll a, ll b)
{
    return (a / gcd(a, b)) * b;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        string s,t;
        cin >> s>>t;
        int l1 = s.size(),l2=t.size();
        ll chk = lcm(l1,l2);
        //cout << chk <<endl;
        if(chk%l1==0 && chk%l2==0)
        {
            string str1,str2;
            ll x1 = chk/l1;
            ll x2 = chk/l2;
            for(ll i=0; i<x1; i++)
            {
                str1 += s;
            }
            for(ll i=0; i<x2; i++){
                str2 += t;
            }
            //cout << str1 <<endl;
            //cout << str2 <<endl;
            if(str1==str2)
            {
                cout << str1 <<endl;
            }
            else
            {
                cout << -1 <<endl;
            }
            
        }
        else
        {
            cout << -1 <<endl;
        }
        
    }
}