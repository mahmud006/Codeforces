#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,r;
    cin >>n>>m>>r;
    int b[n], s[m];
    for(int i=0; i<n; i++)
    {
        cin >> b[i];
    }
    for(int i=0; i<m; i++)
    {
        cin >> s[i];
    }
    sort(b, b+n);
    sort(s, s+m);
    int minimumOfbuy = b[0];
    int maximumOfsell = s[m-1];
    if(minimumOfbuy<maximumOfsell)
    {
        int x = r/minimumOfbuy;
        int y = x*maximumOfsell;
        int sum = (r-(x*minimumOfbuy))+y;
        cout << sum <<endl;
    }
    else
    {
    cout << r <<endl;
    }
}
