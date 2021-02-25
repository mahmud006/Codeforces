#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,k,flag=0;
        cin >> n>>k;
        if(n%2==0)
        {
            for(int i=2; i*i<=n; i+=2)
            {
                if(i==k)
                {
                    flag++;
                    break;
                }
            }
        }
        else
        {
            for(int i=1; i*i<=n; i+=2)
            {
                if(i==k)
                {
                    flag++;
                    break;
                }
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
