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
        ll arr[n];
        ll c = 1, chk=0;
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (chk == arr[i])
            {
                c++;
            }
            chk = arr[i];
        }

        ll cnt = 0;
        if (c == n)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            ll i = 0, x = 0,y;
            ll brr[n];

            for (ll j = 1; j < n; j++)
            {
                if (arr[i] != arr[j])
                {
                    cout << i + 1 << " " << j + 1 << endl;
                    y = j+1;
                }
                else
                {
                    brr[x] = j+1;
                    x++;
                } 
            }
            for(ll j=0; j<x; j++)
            {
                cout << y << " " << brr[j] <<endl;
            }
        }
    }
}
