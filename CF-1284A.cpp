#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin >> n>>m;
    string s[n], t[m];
    for(int i=0; i<n; i++)
    {
        cin >> s[i];
    }
    for(int i=0; i<m; i++)
    {
        cin >> t[i];
    }
    int q;
    cin >> q;
    for(int i=0; i<q; i++)
    {
        int y;
        cin >> y;
        int a = y%n;
        int b = y%m;
        if(a==0)
        {
            a = n;
        }
        if(b==0)
        {
            b = m;
        }
        cout << s[a-1]+t[b-1] <<endl;
    }
}
