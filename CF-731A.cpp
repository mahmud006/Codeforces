#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string s;
    cin >> s;
    ll n=97,sum=0;
    for(ll i=0; i<s.size(); i++)
    {
        sum += min(abs(n-s[i]), 26-abs(n-s[i]));
        n = s[i];
    }
    cout << sum <<endl;
}
