#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int count=0;
    cin >> s;
    char str[s.size()];
    for(int i=0; i<s.size(); i++)
    {
        if(i==0)
        {
            if(s[i]>='a' && s[i]<='z')
            {
                count++;
                str[i] = s[i] -32;
            }
            else if(s[i]>='A' && s[i]<='Z')
            {
                count++;
                str[i] = s[i] +32;
            }
        }
        else
        {
            if(s[i]>='A' && s[i]<='Z')
            {
                count++;
                str[i] = s[i] +32;
            }
        }
    }
    if(count == s.size())
    {
        for(int i=0; i<s.size(); i++)
        cout << str[i];
    }
    else
    {
        cout << s <<endl;
    }
}
