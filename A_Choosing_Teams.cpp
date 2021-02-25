#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
   ll n,k,cnt=0;
   cin >> n>>k;
   ll arr[n];
   for(ll i=0; i<n; i++)
   {
       cin >> arr[i];
       if(arr[i]+k <=5)
       {
           cnt++;
       }
   }
   cout << cnt/3 <<endl;
}