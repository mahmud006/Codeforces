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
        cin >>n >>k;
        ll arr[n], brr[n];
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        for(int i=0; i<n; i++)
        {
            cin >> brr[i];
        }
        ll sum=0,cnt=0;
        sort(arr, arr+n,greater<>());
        sort(brr, brr+n,greater<>());
        for(int i=0,j=0; i<n,j<n; i++,j++)
        {
            //cout << i <<":: " <<sum <<endl;
            if(cnt==n)
                break;
            if(k>0)
            {
                if(brr[i]>arr[j])
                {
                    sum += brr[i];
                    k--;
                    j--;
                    cnt++;
                }
                else
                {
                    sum+=arr[j];
                    i--;
                    cnt++;
                }
            }
            else
            {
                sum+=arr[j];
                i--;
                cnt++;
            }
        }
        cout << sum <<endl;
    }
}
