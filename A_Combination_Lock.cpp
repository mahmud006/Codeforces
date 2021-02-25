#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;
    cin >> n;
    string s1,s2;
    cin >> s1>>s2;
    ll chk1,chk2,mn,sum=0;
    for(ll i=0; i<n; i++)
    {
        chk1 = abs((s1[i]-'0') - (s2[i]-'0'));
        chk2 = 10 - abs((s1[i]-'0') - (s2[i]-'0'));
        mn = min(chk1,chk2);
        sum+=mn;
    }
    cout << sum <<endl;
}