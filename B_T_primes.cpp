#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool notprime[1000007];
void sieve(ll n)
{
    notprime[1] = 1;
    for(ll i=2; i<n; i++)
    {
        if(!notprime[i]==1)
        {
            for(ll j=i+i; j<n; j+=i)
            {
                notprime[j] = 1;
            }
        }
    }
}

int main()
{
    ll n;
    cin >> n;
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll chk = 1000007;
    sieve(chk);
    for (ll i = 0; i < n; i++)
    {
        double x = sqrt(arr[i]);
        if(x==(ll)x && arr[i]>1)
        {
            if (notprime[(ll)x]==0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "NO" <<endl;
        }
        
    }
}