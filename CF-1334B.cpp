#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll n, x, sum=0, cnt=0;
        cin >> n >>x;
        ll arr[n];
        for(ll i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        sort(arr,arr+n, greater<>());
        for(ll i=0; i<n; i++)
        {
            sum += arr[i];
            if(sum/(i+1) >=x)
            {
                cnt++;
            }
        }
        cout << cnt <<endl;
    }
}
