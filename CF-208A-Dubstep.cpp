#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s2;
    cin >> s;
    int len = s.size();
    int count =0;
    for(int i=0; i<len; i++)
    {
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')
        {
           i+=2;
           if(count==1)
           {
               s2.push_back(' ');
               count=0;
           }
        }
        else
        {
            s2.push_back(s[i]);
            count=1;
        }
    }
    cout << s2 <<endl;
}
