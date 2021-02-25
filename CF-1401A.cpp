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
        if(n<=k)
        {
            cout << k-n <<endl;
        }
        else
        {
            if(k==0 && n%2==0)
            {
                cout << k <<endl;
            }
            else if(k==0 && n%2 != 0)
            {
                cout << n<<endl;
            }
            else
            {
                cout << n-k <<endl;
            }
        }
    }
}
