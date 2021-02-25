#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        string s;
        int flag=0;
        cin >> s;
        int sz = s.size()-1;
        for(int j=0; j<s.size(); j++)
        {
            if(s[j]=='?')
            {
                if(s[j-1]=='a' && (s[j+1]=='c' || s[j+1]=='a' || s[j+1]=='?'))
                {
                    s[j] = 'b';
                }
                else if(s[j-1]=='b' && (s[j+1]=='c' || s[j+1]=='b' || s[j+1]=='?'))
                {
                    s[j] = 'a';
                }
                else if(s[j-1]=='c' && (s[j+1]=='a' || s[j+1]=='c' || s[j+1]=='?'))
                {
                    s[j] = 'b';
                }
                else if(s[j-1]=='c' && (s[j+1]=='b' || s[j+1]=='c' || s[j+1]=='?'))
                {
                    s[j] = 'a';
                }
                else if(s[j-1]=='a' && (s[j+1]=='b' || s[j+1]=='a' || s[j+1]=='?'))
                {
                    s[j] = 'c';
                }
                else if(s[j-1]=='b' && (s[j+1]=='a' || s[j+1]=='b' || s[j+1]=='?'))
                {
                    s[j] = 'c';
                }
                else if(s[0]=='?' && (s[j+1]=='a' || s[j+1]=='?'))
                {
                    s[0] = 'b';
                }
                else if(s[0]=='?' && (s[j+1]=='b' || s[j+1]=='?'))
                {
                    s[0] = 'c';
                }
                else if(s[0]=='?' && (s[j+1]=='c' || s[j+1]=='?'))
                {
                    s[0] = 'b';
                }
                else if(s[sz]=='?' && s[sz-1]=='a')
                {
                    s[sz] = 'b';
                }
                else if(s[sz]=='?' && s[sz-1]=='b')
                {
                    s[sz] = 'a';
                }
                else if(s[sz]=='?' && s[sz-1]=='c')
                {
                    s[sz] = 'b';
                }
                else if(s[0]=='?' && j==sz)
                {
                    s[0] = 'a';
                }
            }
        }
        for(int k=0; k<s.size(); k++)
            {
                if(s[k]==s[k+1])
                {
                    flag++;
                }
            }
        if(flag>0)
        {
            cout << "-1" <<endl;
        }
        else
        {
            cout << s <<endl;
        }
    }
}
