#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,sum=0;
    cin >> n>>m;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    for(int i=0; i<n; i++)
    {
        sum += arr[i];
        cout << sum/m <<" ";
        sum = sum%m;
    }
}
