#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n],sum1=0,sum2=0, flag=0;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    int i =0;
    while(i<n)
    {
        if(flag==0)
        {
            sum1 += max(arr[i], arr[n-1]);
            if(arr[i] > arr[n-1])
            {
                i++;
            }
            else
            {
                n--;
            }
            flag = 1;
        }
        else
        {
            sum2 += max(arr[i], arr[n-1]);
            if(arr[i] > arr[n-1])
            {
                i++;
            }
            else
            {
                n--;
            }
            flag = 0;
        }
    }
    cout << sum1 << " " <<sum2 <<endl;
}
