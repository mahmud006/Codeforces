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
        set<int> s;
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            s.insert(arr[i]);
        }
       if(s.size()==n)
       {
           cout << "NO" <<endl;
       }
       else
       {
           cout << "YES" <<endl;
       }
       
    }
}