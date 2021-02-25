#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        double chk = (double)n/(double)4;
        for(ll i=0; i<n-ceil(chk); i++)
        {
            cout << 9;
        }
        for(ll i=0; i<ceil(chk); i++)
        {
            cout << 8;
        }
        cout << endl;
    }
}
