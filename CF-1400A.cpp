#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        for(ll i=0; i<s.size(); i++)
        {
            if(i%2 == 0)
            {
                cout << s[i];
            }
        }
        cout << endl;
    }
}
