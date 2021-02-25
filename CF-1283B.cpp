#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll n, k;
        cin >> n>> k;
        ll sum = n - n%k;
        ll c = n%k;
        ll check = k/2;
        sum += min(c, check);
        cout << sum <<endl;
    }
}
