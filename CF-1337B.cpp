#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x,n,m,flag=0,chk1,chk2;
        cin >> x>>n>>m;
        if(x-(m*10) <=0)
        {
            cout << "YES" <<endl;
        }
        else
        {
            for(int i=0; i<n; i++)
            {
                x = x/2 + 10;
                if(x<=0)
                {
                    flag++;
                    break;
                }
            }
            for(int i=0; i<m; i++)
            {
                x = x - 10;
                if(x<=0)
                {
                    flag++;
                    break;
                }
            }
            if(flag>0)
            {
                cout << "YES" <<endl;
            }
            else
            {
                cout << "NO" <<endl;
            }
        }
    }
}
