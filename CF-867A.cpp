#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char s[n];
    for(int j=0; j<n; j++)
    {
        cin >> s[j];
    }
    int c=0, cnt=0;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='S' && s[i+1]=='F')
        {
            cnt++;
        }
        if(s[i]=='F' && s[i+1]=='S')
        {
            c++;
        }
    }
    if(cnt>c)
    {
        cout << "YES" <<endl;
    }
    else
    {
        cout << "NO" <<endl;
    }
}
