#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >>t;
    while(t--)
    {
        int n, sum=0, c1=0, c2=0;
        cin>> n;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
            sum+=arr[i];
            if(arr[i]%2==0)
            {
                c1++;
            }
            else
            {
                c2++;
            }
        }
        if(sum%2 != 0)
        {
            cout << "YES" <<endl;
        }
        else
        {
            if(c1>0 && c2>0)
            {
                cout << "YES" <<endl;
            }
            else
            {
            cout << "NO" <<endl;
            }
        }
    }
}
