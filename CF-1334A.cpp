#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,flg=0,chk1,chk2;
        cin >> n;
        int p[n], c[n];
        for(int i=0; i<n; i++)
        {
            cin >> p[i] >> c[i];
        }
        if(p[0]<c[0])
        {
            flg++;
        }
        for(int i=1; i<n; i++)
        {
            if(p[i]<c[i])
            {
                flg++;
            }
            chk1 = p[i] - p[i-1];
            chk2 = c[i] - c[i-1];
            if(chk1<0 || chk2<0)
            {
                flg++;
            }
            if(chk1<chk2)
            {
                flg++;
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
}
