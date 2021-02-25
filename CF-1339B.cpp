#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll n,x;
        cin >> n;
        ll arr[n], brr[n];
        for(ll i=0; i<n; i++)
        {
            cin >> arr[i];
            brr[i] = arr[i];
        }
        sort(arr, arr+n);
        sort(brr, brr+n, greater<>());

        if(n%2==0)
        {
            x = (n/2)-1;
        }
        else
        {
            x = n/2;
        }
        for(ll i=x; i>-1; i--)
        {
            if(i==x && n%2 != 0)
            {
                cout << arr[i] << " ";
            }
            else
            {
            cout << arr[i] << " " << brr[i]<<" ";
            }
        }
        cout << endl;
    }
}
