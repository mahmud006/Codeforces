#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    for(int i=0; i<q; i++)
    {
        long long n, c=0, flag=0;
        cin >> n;
        while(1)
        {
            if(n%2==0)
            {
                n = n/2;
                c++;
            }
            else if(n%3==0)
            {
                n = 2*n/3;
                c++;
            }
            else if(n%5==0)
            {
                n = 4*n/5;
                c++;
            }
            else if(n==1)
            {
                break;
            }
            else
            {
                flag++;
                break;
            }
        }
        if(flag==0)
        {
        cout << c <<endl;
        }
        else
        {
            cout << "-1" <<endl;
        }
    }
}
