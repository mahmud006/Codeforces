#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        bool flg=false;
        cin >> n;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        sort(arr,arr+n);
        for(int i=0; i<n-1; i++)
        {
            if((arr[i+1]-arr[i])>1)
            {
                flg=true;
            }
        }
        if(flg==false)
        {
            cout << "YES" <<endl;
        }
        else
        {
            cout << "NO" <<endl;
        }
    }
}
