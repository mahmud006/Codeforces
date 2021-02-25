#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;
    cin >> n;
    ll sum;
    
    ll c1= n-2;
    ll c2 = n-3;
    ll c3 = n-5;
    ll c4 = n-7;
    if(n==2 || n==3)
    {
        cout << 1 <<endl;
        cout << n <<endl;
    }
    else
    {
        if(c1%2==0)
        {
            cout << c1/2 + 1 <<endl;
            for(ll i=0; i<c1/2 + 1; i++)
            {
                cout << 2 << " ";
            }
            cout << endl;
        }
        else if(c2%2==0)
        {
            cout << c1/2 + 1 <<endl;
            for(ll i=0; i<c1/2; i++)
            {
                cout << 2 << " ";
            }
            cout << 3 <<endl;
        }
        else if(c3%2==0)
        {
            cout << c1/2 + 1 <<endl;
            for(ll i=0; i<c1/2; i++)
            {
                cout << 2 << " ";
            }
            cout <<  5<<endl;
        }
        else if(c4%2==0)
        {
            cout << c1/2 + 1 <<endl;
            for(ll i=0; i<c1/2; i++)
            {
                cout << 2 << " ";
            }
            cout << 7 <<endl;
        }


    }
    
}