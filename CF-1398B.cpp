#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        ll n=s.size(),cnt=0,sum=0, j=0;
        ll arr[n];
        for(ll i=0; i<s.size(); i++)
        {
            if(s[i]=='1')
            {
                cnt++;
            }
            if(s[i]=='0')
            {
                arr[j] = cnt;
                cnt=0;
                j++;
            }
            if(i==n-1 && s[i]=='1')
            {
                arr[j] = cnt;
                j++;
            }
        }
        sort(arr, arr+j, greater<>());
        for(ll i=0; i<j; i++)
        {
            if(i%2==0)
            sum+=arr[i];
        }
        cout << sum <<endl;
    }
}
