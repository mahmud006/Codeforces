#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,flag=0,j=0,cnt=0;
    cin >> n;
    int arr[n];
    string s;
    cin >> s;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    int a[n];
    for(int i=0; i<n-1; i++)
    {
        if(s[i]=='R' && s[i+1]=='L')
        {
            a[j] = abs(arr[i]-arr[i+1]);
            flag++;
            j++;
        }
    }
    if(flag>0)
    {
        int *mn = min_element(a,a+j);
        cout << *mn/2 <<endl;
    }
    else
    {
        cout << -1 <<endl;
    }
}
