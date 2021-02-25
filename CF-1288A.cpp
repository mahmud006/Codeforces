#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        double n,d,res,flag=0;
        cin >> n>>d;
        if(d<=n)
        {
            cout << "YES" <<endl;
        }
        else
        {
            int i=n;
            while(1)
            {
                res = ceil(d/(i+1))+i;
                if(res<=n)
                {
                    flag++;
                    break;
                }
                i--;
                if(i<floor(n/2))
                {
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
