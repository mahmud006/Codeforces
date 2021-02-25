#include<bits/stdc++.h>
using namespace std;
int cnt(string s)
{
    int cnnt = 0;

    for (int i = 0; i < s.size(); i++)
    {
        bool check = false;
        for (int j = 0; j < i; j++)
        {
            if (s[j] == s[i])
            {
                check = true;
                break;
            }
        }

        if (!check)
        {
            cnnt++;
        }
    }

    return cnnt;
}
int main()
{
    string str;
    getline(cin,str);
    string s;
    for(int i=0; i<str.size(); i++)
    {
        if(isalpha(str[i]))
        {
            s+= str[i];
        }
    }
    cout << cnt(s) <<endl;
}
