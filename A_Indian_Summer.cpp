#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin >> n;
    set<ll>st1;
    for(ll i=0; i<n; i++)
    {
        string s1,s2;
        cin>> s1>>s2;
        ll sm1=0,sm2=0,s;
        for(ll i=0; i<s1.size(); i++)
        {
            sm1+=s1[i]*(i+1);
        }
        for(ll i=0; i<s2.size(); i++)
        {
            sm2+=s2[i]*(i+1);
        }
        s = sm1*s1.size()-sm2*s2.size();
        st1.insert(s);
    }
    // for(auto it : st1)
    // {
    //     cout << it <<endl;
    // }
    cout <<st1.size()<<endl;
}