#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,cnt=0;
    cin >>a>>b>>c>>d;
    int arr[3];
    arr[0] = a;
    arr[1] = b;
    arr[2] = c;
    sort(arr, arr+3);
    int c1 = abs(arr[0]-arr[1]);
    int c2 = abs(arr[1]-arr[2]);
    int res1=0, res2=0;
    if(c1<d)
    {
        res1 = d-c1;
    }
    if(c2<d)
    {
        res2 = d-c2;
    }
    cout << res1+res2<<endl;
}
