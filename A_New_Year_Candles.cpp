#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin >> a>>b;
    int sum = a;
    while(1)
    {
        int x = a;
        a = a/b;
        sum += a;
        if(x%b != 0)
        {
        a += x%b;
        }
        if(a<b) break;
       
    }
    cout << sum <<endl;
}