#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n,k;
        cin >> n>>k;
        if(n%2==0)
        {
            if(k<=n && (k <= (n/2) || k%2==0))
            {
                cout << "YES" <<endl;
                if(n%k != 0 && k%2!=0)
                {
                for(ll i=0; i<k-1; i++)
                {
                    cout << 2 << " ";
                }
                cout << n-(2*(k-1)) <<endl;
                }
                else if(n%k != 0 && k%2==0)
                {
                for(ll i=0; i<k-1; i++)
                {
                    cout << 1 << " ";
                }
                cout << n-(1*(k-1)) <<endl;
                }
                else
                {
                    for(ll i=0; i<k; i++)
                    {
                        cout << n/k <<" ";
                    }
                    cout << endl;
                }
            }
            else
            {
                cout << "NO" <<endl;
            }
        }
        else
        {
            if(k<= n && k%2 !=0)
            {
                cout << "YES" <<endl;
                for(ll i=0; i<k-1; i++)
                {
                    cout << 1 << " ";
                }
                cout << n-(1*(k-1)) <<endl;
            }
            else
            {
                cout << "NO" <<endl;
            }
        }
    }
}
