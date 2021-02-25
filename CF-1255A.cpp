#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        int a,b,cnt=0;
        cin >> a>>b;
        int diff = abs(a-b);
        while(diff!=0)
        {
            cnt += diff/5;
            diff = diff%5;
            cnt += diff/2;
            diff = diff%2;
            cnt += diff/1;
            diff = diff%1;
        }
        cout << cnt<<endl;
    }
}
