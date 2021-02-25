#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n,a1=0,a2=0;
        cin >> n;
        ll arr[n];
        for(ll i=0; i<n; i++)
        {
            cin >> arr[i];
            if(arr[i]%2==0)
            {
                a1++;
            }
            else
            {
                a2++;
            }
        }
        if(a1%2==0 && a2%2==0)
        {
            cout <<"YES" <<endl;
        }
        else
        {
            sort(arr, arr+n);
            ll chk,cnt=0;
            for(ll i=0; i<n-1; i++)
            {
                chk = abs(arr[i]-arr[i+1]);
                if(chk == 1)
                {
                    cnt++;
                    i++;
                    a1--;
                    a2--;
                    chk = 0;
                }
            }
            if(a1%2==0 && a2%2==0)
            {
                cout << "YES" <<endl;
            }
            else
            {
                if(cnt> 0)
                {
                    cout << "YES" <<endl;
                }
                else
                {
                    cout << "NO"<<endl;
                }
            }
        }
    }
}

