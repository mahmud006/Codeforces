#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=0;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    for(int i=0; i<n; i++)
    {
        if(arr[i]==1)
        {
            cnt++;
        }
        if(arr[i]==0 && (i==n-1 || i==0))
        {
            continue;
        }
        else if(arr[i]==0 && arr[i-1]==1 && arr[i+1]==1)
        {
            cnt++;
        }
    }
    cout << cnt <<endl;
}
