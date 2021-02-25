#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        long long x,y;
        cin >> x >> y;
        long long range = x-y;
        if(range==1)
        {
            cout << "NO" <<endl;
        }
        else
        {
            cout << "YES" <<endl;
        }
    }
}
