#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    string s1 = "ftp", s2 = "http", s3= "ru";
    int f1=0,f2=0,f3=0,f4=0;
    for(int i=0; i<s.size(); )
    {
        if(s.substr(i, 3)==s1 && f1==0 && f2==0)
        {
            cout << s1 <<"://";
            i+=3;
            f1++;
        }
        if(s.substr(i, 4)==s2 && f2==0 && f1==0)
        {
            cout << s2 <<"://";
            i+=4;
            f2++;
        }
        if(s.substr(i, 2)==s3 && f3==0 && f4>0)
        {
            cout << "." <<s3;
            i+=2;
            f3++;
            if(i!=s.size())
            {
                cout <<"/";
            }
        }
        else
        {
            cout << s[i];
            i++;
            f4++;
        }
    }
}
