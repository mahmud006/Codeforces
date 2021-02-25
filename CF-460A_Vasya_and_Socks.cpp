#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m, count=0;
    cin >> n >> m;
    for(int i=1; i<=n; i++)
    {
        count++;
        if(count%m==0)
        {
            count++;
        }
    }
    cout << count <<endl;
}
