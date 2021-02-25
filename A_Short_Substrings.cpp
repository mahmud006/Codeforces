#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        cout << s[0];
        for(ll i=1; i<s.size()-1; i+=2)
        {
            cout << s[i];
        }
        cout << s[s.size()-1] <<endl;
    }
}