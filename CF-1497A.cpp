#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        ll arr[n];
        for(ll i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr+n);
        ll brr[n],j=0;
        bool flg=false;

        for(ll i=0; i<n; i++)
        {
            if(arr[i]==arr[i-1] && i!=0)
            {
                brr[j] = arr[i];
                flg=true;
                j++;
            }
            else
            {
                cout << arr[i] << " ";
            }
        }
        if(flg==true)
        {
            for(ll i=0; i<j; i++)
            {
                cout << brr[i] << " ";
            }
        }
        cout << endl;
    }   
}