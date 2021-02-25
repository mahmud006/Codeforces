#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        double n,x;
        cin >> n>>x;
        if(n==1 && x==1) cout << 1<<endl;
        else
        {
        cout << ceil((n-2)/x)+1 <<endl;
        }
    }
}