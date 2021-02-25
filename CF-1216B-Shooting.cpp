#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0;
    cin >> n;
    int arr[n], a[n], aj[n];
    int k=1;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
        a[arr[i]] = k;

        k++;
    }
    sort(arr, arr+n, greater<>());
    for(int i=0; i<n; i++)
    {
        sum += arr[i]*i+1;
    }
    for(int i=0; i<n; i++)
    {
        cout << aj[arr[i]] <<endl;
    }
    cout << sum <<endl;
}
