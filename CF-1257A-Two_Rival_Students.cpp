#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    for(int i=0; i<q; i++)
    {
        int n, x, a, b;
        cin >> n>>x>>a>>b;
        if(a>b)
        {
        for(int j=0; j<x; j++)
            {
                if(a == n)
                {
                    for(int k=j; k<x; k++)
                    {
                        if(b==1)
                        {
                            break;
                        }
                        b--;
                    }
                    break;
                }
                a++;
            }
        }
        else if(a<b)
        {
           for(int j=0; j<x; j++)
            {
                if(b == n)
                {
                    for(int k=j; k<x; k++)
                    {
                        if(a==1)
                        {
                            break;
                        }
                        a--;
                    }
                    break;
                }
                b++;
            }
        }
        cout << abs(a-b) <<endl;
    }
}
