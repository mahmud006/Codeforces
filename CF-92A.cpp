#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,flag=0;
    cin >> n>>m;
    while(1)
    {
        for(int i=1; i<=n; i++)
        {
            if(m<i)
            {
                flag++;
                break;
            }
            m-=i;
        }
        if(flag>0)
        {
            break;
        }
    }
    cout << m <<endl;
}
