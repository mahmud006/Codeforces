#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,f1=0,f2=0,cnt=0;
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
            f1++;
            if(f2>0)
            {
                cnt++;
                f2=0;
            }
        }
        else if(f1>0)
        {
            f2++;
        }
    }
    cout << cnt <<endl;
}
