#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin >> n;
    ll arr[n];
    ll cnt = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 1)
        {
            cnt++;
        }
    }
    //cout << cnt <<endl;
    ll c1=0,c2=0, mx=0,mx1=0;
    for (ll i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            c1++;
            for (ll j = i+1; j < n; j++)
            {
                if(arr[j]==0)
                {
                    c1++;
                    if(c1>=mx && c1>c2)
                    {
                        mx = c1;
                        //c1=0;
                        //c2=0;
                    }
                    
                }
                else
                {
                    c2++;
                }
                //cout << "c1: " <<c1 <<endl;
            }
            cout <<i <<":"<< mx <<endl;
            mx = 0;
        }
        if(mx > mx1)
        {
            mx1 = mx;
        }
        mx = 0;
    }
    cout << mx1 <<endl;
}
