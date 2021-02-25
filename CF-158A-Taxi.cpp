#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n], sum=0,count=0;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
     for(int i=0; i<n-1; i++)
     {
         sum = arr[i];
        for(int j=i+1; j<n; j++)
        {
            sum += arr[j];
            if(sum==4)
            {
                count++;
                sum = 0;
            }
            else if(sum>4)
            {
                ;
            }
            else if(sum<4)
            {
                continue;
            }
            else
            {
                count++;
            }
        }
    }

    cout << count <<endl;
}
