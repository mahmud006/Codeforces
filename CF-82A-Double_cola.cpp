#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n;
    cin >> n;
    if(n<=5)
    {
        if(n%5==1)
        {
            cout << "Sheldon" <<endl;
        }

        if(n%5==2)
        {
            cout << "Leonard" <<endl;
        }
        if(n%5==3)
        {
            cout << "Penny" <<endl;
        }
        if(n%5==4)
        {
            cout << "Rajesh" <<endl;
        }
        if(n%5==0)
        {
            cout << "Howard" <<endl;
        }
    }
    else
    {
        for(int i=5; ; i+=i)
        {
            if(i>=n)
            {
                double x = (i-(i/2))/5;
                double y = (abs(n-(i-(i/2))));

                if(ceil(y/x)==0)
                {
                    cout << "Howard" <<endl;
                    break;
                }
                if(ceil(y/x)==1)
                {
                    cout << "Sheldon" <<endl;
                    break;
                }
                if(ceil(y/x)==2)
                {
                    cout << "Leonard" <<endl;
                    break;
                }
                if(ceil(y/x)==3)
                {
                    cout << "Penny" <<endl;
                    break;
                }
                if(ceil(y/x)==4)
                {
                    cout << "Rajesh" <<endl;
                    break;
                }
            }
        }
    }
}
