#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    for(int i=0; i<q; i++)
    {
        int n,sum=0;
        cin >> n;
        for(int i=0; i<n; i++)
        {
            int a;
            cin >> a;
            sum +=a;
        }
        int res;
        res = ceil((double)sum/(double)n);
        cout << res <<endl;
    }
}
