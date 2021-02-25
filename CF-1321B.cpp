#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0;
    cin >> n;
    int arr[n];
    for(int i=1; i<=n; i++)
    {
        cin >> arr[i];
    }
    for(int i=1; i<n; i++)
    {
        for(int j=i+1; j<=n; j++)
        {
            if(j-i==arr[j]-arr[i])
            {
                sum+=arr[i];
                sum+=arr[j];
                i += j;
            }
        }
    }
    cout << sum <<endl;
}
