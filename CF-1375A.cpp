#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n,c1=0,c2=0;
        cin >> n;
        ll arr[n];
        for(ll i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        ll chk1 = (n-1)/2;

        for(ll i=0; i<n-1; i++)
        {
            ll chk2 = arr[i+1]-arr[i];
            if(chk2<=0)
            {
                c1++;
            }
            if(chk2>=0)
            {
                c2++;
            }
        }
        //cout << c1 <<c2 <<endl;
        if(c1>=chk1 && c2>=chk1)
        {
            for(ll i=0; i<n; i++)
            {
                cout<<arr[i] << " ";
            }
            cout << endl;
        }
        else if(c1>=chk1 && c2<chk1)
        {
            ll x = chk1-c2;
            for(ll i=0; i<n; i++)
            {
                if(x==0)
                {
                    break;
                }
                if(arr[i]>0)
                {
                    arr[i] = arr[i]*(-1);
                    x--;
                }
            }
            for(ll i=0; i<n; i++)
            {
                cout<<arr[i] << " ";
            }
            cout << endl;
        }
        else if(c1<chk1 && c2>=chk1)
        {
            ll y = chk1-c1;
            for(ll i=0; i<n; i++)
            {
                if(y==0)
                {
                    break;
                }
                if(arr[i]>0)
                {
                    arr[i] = arr[i]*(-1);
                    y--;
                }
            }
            for(ll i=0; i<n; i++)
            {
                cout<<arr[i] << " ";
            }
            cout << endl;
        }
        else
        {
            ll z1 = (chk1-c1);
            ll z2 = (chk1-c2);
            for(ll i=0; i<n; i++)
            {
                if(z1==0 && z2==0)
                {
                    break;
                }
                if(arr[i]>0 && z1>0)
                {
                    arr[i] = arr[i]*(-1);
                    z1--;
                }
                if(arr[i]>0 && z2>0)
                {
                    arr[i] = arr[i]*(-1);
                    z2--;
                }
            }
            for(ll i=0; i<n; i++)
            {
                cout<<arr[i] << " ";
            }
            cout << endl;
        }

    }
}
