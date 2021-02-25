#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s;
    string t;
    cin >> s >> t;
    string str1 = "qwertyuiop";
    string str2 = "asdfghjkl;";
    string str3 = "zxcvbnm,./";
    if(s=='R')
    {
        for(int i=0; i<t.size(); i++)
        {
            int a = t[i];
            for(int j=0; j<str1.size(); j++)
            {
                if(a==str1[j])
                {
                    t[i] = str1[j-1];
                }
            }
            for(int j=0; j<str2.size(); j++)
            {
                if(a==str2[j])
                {
                    t[i] = str2[j-1];
                }
            }
            for(int j=0; j<str3.size(); j++)
            {
                if(a==str3[j])
                {
                    t[i] = str3[j-1];
                }
            }
        }
        cout << t<<endl;
    }
    else
    {
        for(int i=0; i<t.size(); i++)
        {
            int a = t[i];
            for(int j=0; j<str1.size(); j++)
            {
                if(a==str1[j])
                {
                    t[i] = str1[j+1];
                }
            }
            for(int j=0; j<str2.size(); j++)
            {
                if(a==str2[j])
                {
                    t[i] = str2[j+1];
                }
            }
            for(int j=0; j<str3.size(); j++)
            {
                if(a==str3[j])
                {
                    t[i] = str3[j+1];
                }
            }
        }
        cout << t<<endl;
    }
}
/*#include <bits/stdc++.h>
using namespace std;
int main()
{

    string s = "qwertyuiopasdfghjkl;zxcvbnm,./";

    char c;
    cin >> c;

    int i,l, shi = (c == 'R')? -1 : 1;

    char ss[110];
    scanf("%s",ss);
    l=strlen(ss);

    for(int j=0; j<l; j++)
    {
        for(i=0; i<s.size(); i++)
        {
            if(s[i]==ss[j]) cout << s[i+shi];
        }
    }

    return 0;
}*/
