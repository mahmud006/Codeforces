#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    bool flag = 1;
    for(int i=2; i*i<=n; i++)
    {
        if(n%i==0)
        {
            flag = 0;
            break;
        }
    }
    return flag;
}
int main()
{
    int n;
    cin >> n;
    int check = n/2;
    if(isPrime(check)==0 && check+check==n)
    {
        cout << check <<" " <<check <<endl;
    }
    else
    {
        int c1,c2;
        if(n%2==0)
        {
            c1 = check+1;
            c2 = check-1;
            while(1)
            {
                if(isPrime(c1)==0 && isPrime(c2)==0)
                {
                    cout << c1 << " " <<c2 <<endl;
                    break;
                }
                c1++;
                c2--;
            }
        }
        else
        {
            c1 = check+1;
            c2 = check;
            while(1)
            {
                if(isPrime(c1)==0 && isPrime(c2)==0)
                {
                    cout << c1 << " " <<c2 <<endl;
                    break;
                }
                c1++;
                c2--;
            }
        }

    }
}
