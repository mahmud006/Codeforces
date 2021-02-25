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
        cout << 2 <<endl;
      if(n==2)
      {
          cout << n <<" " << n-1 <<endl;
      }
      else
      {
        cout << n <<" " <<n-2 <<endl;
        cout << n-1<<" " <<n-1 <<endl;
        n = n-1;
        while(n-2>0)
        {
            cout << n-2 <<" " << n <<endl;
            n--;
        }  
      }  
    }
}