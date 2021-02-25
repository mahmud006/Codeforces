#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    for(int i=0; i<q; i++)
    {
        int n;
        cin >> n;
        int arr[n], flag=0;
        for(int j=0; j<n; j++)
        {
            cin >> arr[j];
        }
        sort(arr, arr+n);
        for(int k=0; k<n-1; k++)
        {
            if(arr[k+1]-arr[k] <= 1)
            {
                flag++;
                break;
            }
        }
        if(flag>0)
        {
            cout << '2' <<endl;
        }
        else
        {
            cout << '1' <<endl;
        }
    }
}
