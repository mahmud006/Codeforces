#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0,sum1=0,sum2;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    int s,t;
    cin >> s>>t;
    int mn = min(s,t);
    int mx = max(s,t);
    for(int i=mn-1; i<mx-1; i++)
        {
            sum1 += arr[i];
        }
    sum2 = sum-sum1;
    cout <<min(sum1,sum2) <<endl;
}
