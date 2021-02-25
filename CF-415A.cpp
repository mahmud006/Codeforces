#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin >> n>>m;
    int a[m], y=0;
    int arr[m], x=1000;
    for(int i=0; i<m; i++)
    {
        cin >> a[i];
        if(a[i]<x)
        {
            arr[y] = a[i];
            y++;
            x = a[i];
        }
    }
    int k=0, l=n;
    int ar[n];
    for(int i=0; i<y; i++)
    {
            for(int j=arr[i]; j<=l; j++)
            {
                ar[k] = arr[i];
                k++;
            }
        l = arr[i]-1;
    }
    sort(ar, ar+k);
    for(int i=0; i<k; i++)
    {
        cout << ar[i] <<" ";
    }
}
