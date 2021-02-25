#include<bits/stdc++.h>
using namespace std;
bool isDistinct(int n)
{
    int ans, arr[10], j=0,count=0;
    while(n!=0)
    {
        ans = n%10;
        n = n/10;
        arr[j] = ans;
        j++;
    }
    for(int i=0; i<j; i++)
    {
        for(int k=i+1; k<j; k++)
        {
            if(arr[i]==arr[k])
            {
                count++;
            }
        }
    }
    if(count>0)
    {
        return false;
    }
    else
    {
        return true;
    }
}
int main()
{
    int l,r,f=0,res;
    cin >> l >> r;
    for(int i=l; i<=r; i++)
    {
        int flag = isDistinct(i);
        if(flag==true)
        {
            f++;
            res = i;
        }
    }
    if(f>0)
    {
        cout << res <<endl;
    }
    else
    {
        cout << "-1" <<endl;
    }
}
