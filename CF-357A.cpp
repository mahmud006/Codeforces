#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,sum=0,res,ans=0;
    cin >> m;
    int arr[m],csum[m];
    for(int i=0; i<m; i++)
    {
        cin >> arr[i];
        sum += arr[i];
        csum[i] = sum;
    }
    int x,y;
    cin >> x>>y;
    int check = csum[m-1];
    for(int i=0; i<m-1; i++)
    {
        res = check - csum[i];
        if(csum[i]>=x && csum[i]<=y && res>=x && res<=y)
        {
            ans = i+2;
            break;
        }
    }
    cout << ans <<endl;
}
