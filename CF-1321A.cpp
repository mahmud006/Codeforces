#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0,cnt=0,c=0;
    double check;
    cin >> n;
    int arr1[n],arr2[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr1[i];
        if(arr1[i]==1)
        {
            c++;
        }
    }
    for(int i=0; i<n; i++)
    {
        cin >> arr2[i];
        if(arr1[i]==1 && arr2[i]==1)
        {
            cnt++;
        }
        sum+=arr2[i];
    }
    if(cnt==c)
    {
        cout << -1 <<endl;
    }
    else
    {
        check = (sum-cnt)+1;
        cout << ceil(check/(c-cnt)) <<endl;
    }
}
