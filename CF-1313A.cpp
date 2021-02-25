#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a,b,c,cnt=0,flg=0;
        cin >> a>> b>> c;
            if(a>0)
            {
                a--;
                cnt++;
            }
            if(b>0)
            {
                b--;
                cnt++;
            }
            if(c>0)
            {
                c--;
                cnt++;
            }
        if(a>0 && b>0 && b>=c)
        {
            a--;
            b--;
            cnt++;
            flg++;
        }
        if(a>0 && c>0)
        {
            a--;
            c--;
            cnt++;
        }
        if(flg==0 && a>0 && b>0)
        {
            a--;
            b--;
            cnt++;
        }
        if(b>0 && c>0)
        {
            b--;
            c--;
            cnt++;
        }

        if(a>0 && b>0 && c>0)
        {
            a--;
            b--;
            c--;
            cnt++;
        }
        cout << cnt <<endl;
    }
}
