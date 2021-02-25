#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n,x;
        cin >> n>>x;
        ll arr[n];
        ll c1=0,c2=0;
        for(ll i=0; i<n; i++)
        {
            cin >> arr[i];
            if(arr[i]%2==0)
            {
                c1++;
            }
            else
            {
                c2++;
            }
            
        }
        if(x%2 != 0)
        {
            if(c2>=x)
            {
            cout << "Yes" <<endl;
            }
            else if(c2%2!=0)
            {
                cout << "Yes" <<endl;
            }
            else
            {
                cout << "No" <<endl;
            }
            
        }
        else if(x%2==0)
        {
            if(c1 >= x/2 && c2 >= x/2)
            {
                cout << "Yes" <<endl;
            }
            else
            {
                cout << "No" <<endl;
            }
            
        }
        else
        {
            cout << "No" <<endl;
        }
        

    }
}