#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s;
    cin >> n>>s;
    int f[n], t[n],arr[n],sum=0,mx=s;
    for(int i=0; i<n; i++)
    {
        cin >> f[i] >> t[i];
        sum = f[i] + t[i];
        arr[i] = sum;
    }
    cout << max(mx, *max_element(arr, arr+n) )<<endl;
}
