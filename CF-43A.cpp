#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string str[n];
    for(int i=0; i<n; i++)
    {
        cin >> str[i];
    }
    string s = str[0], st;
    int cnt=0, c=0;
    for(int i=0; i<n; i++)
    {
        if(str[i]==s)
        {
            cnt++;
        }
        else
        {
            c++;
            st = str[i];
        }
    }
    if(cnt>c)
    {
        cout << s <<endl;
    }
    else
    {
        cout << st <<endl;
    }
}
