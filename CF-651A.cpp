#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a1,a2,cnt=0;
    cin >> a1>>a2;
    while(1)
    {
        if(a1<a2)
        {
            a1++;
            a2-=2;
        }
        else
        {
            a2++;
            a1-=2;
        }
        if(a1==0 || a2==0)
        {
            cnt++;
            break;
        }
        else if(a1<0 || a2<0)
        {
            break;
        }
        cnt++;
    }
    cout << cnt << endl;
}
