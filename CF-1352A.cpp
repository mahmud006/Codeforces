#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll pw(ll x)
{
    ll result=1;
     while (x != 0) {
        result *= 10;
        x--;
    }

    return result;
}
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n,i=0,x=0,temp;
        cin >> n;
        ll arr[10];
        while(n>0)
        {
            temp = n%10;
            n = n/10;
            arr[i] = temp * pw(x);
            i++;
            x++;
        }
        ll cnt=0,brr[10],k=0;
        for(ll j=0; j<i; j++)
        {
            if(arr[j]>0)
            {
                cnt++;
                brr[k] = arr[j];
                k++;
            }
        }
        cout << cnt <<endl;
        for(ll j=0; j<cnt; j++)
        {
            cout << brr[j] << " ";
        }
        cout << endl;
    }
}
