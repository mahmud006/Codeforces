#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        if (k >= n)
        {
            if (k % n == 0)
            {
                cout << k / n << endl;
            }
            else
            {
                cout << k / n + 1 <<endl;
            }
        }
        else
        {
            ll x = k;
            for (ll i = 1; ; i++)
            {
                
                k = x * i;
                //cout << k <<endl;
                if (k > n)
                {
                    ll c1 = k-(n-1);
                    if(c1%2==0)
                    {
                        ll c2 = c1/2;
                        
                    }
                }
            }
        }
    }
}