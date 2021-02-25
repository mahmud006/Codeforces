#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<ll> divisors[10000000];
void divcal(ll n)
{
    for(ll i=1; i<=n; i++)
    {
        for(ll j=i; j<=n; j+=i)
        {
            divisors[j].push_back(i);
        }
    }
}
int main()
{
    ll t;
    cin >> t;
    divcal(1000000);
    while (t--)
    {
        ll d;
        cin >> d;
        if (d == 1)
        {
            cout << 6 << endl;
        }
        else if (d == 2)
        {
            cout << 15 << endl;
        }
        else
        {
            
            for (ll i = d;; i+=2)
            {
                ll cnt=0,f=0;
                for (ll j=0; j<divisors[i].size(); j++)
                {
                    ll chk = abs(divisors[i][j] - divisors[i][j+1]);
                    if(chk>=d)
                    {
                        cnt++;
                    }
                    else
                    {
                        f++;
                    }
                    
                }
                if(cnt>=4 && f==0)
                {
                    cout << i <<endl;
                    break;
                }
            }
        }
    }
}