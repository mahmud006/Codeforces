#include<bits/stdc++.h>
using namespace std;
#define ll long long
struct abc
{
 ll x1,y1;
};
bool cmp(abc p, abc q)
{
    return (p.x1 < q.x1);
}
int main()
{
    ll s,n;
    cin >> s>>n;
    abc arr[n];
    for(ll i=0; i<n; i++)
    {
        cin >> arr[i].x1 >> arr[i].y1;
    }
    sort(arr, arr+n, cmp);
    ll flg=0;
    for(ll i=0; i<n; i++)
    {
        if(s>arr[i].x1)
        {
            s+=arr[i].y1;
        }
        else
        {
            flg++;
            break;
        }  
    }
    if(flg>0)
    {
        cout << "NO" <<endl;
    }
    else
    {
        cout << "YES" <<endl;
    }
    
}