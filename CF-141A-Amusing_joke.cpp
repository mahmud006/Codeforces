#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2, pile, s3;
    char c[101], c1[101];
    cin >> s1>>s2>>pile;
    s3 = s1 + s2;
    int len1 = s3.size();
    int len2 = pile.size();
    if(len1>len2 || len2>len1)
    {
        cout << "NO" <<endl;
    }
    else
    {
        for(int i=0; i<s3.size(); i++)
        {
            c[i] = s3[i];
        }
        for(int i=0; i<pile.size(); i++)
        {
            c1[i] = pile[i];
        }
        int flag = 0;
        sort(c, c+len1);
        sort(c1, c1+len2);
        for(int i=0; i<len2; i++)
        {
            if(c[i]!=c1[i])
            {
                flag++;
            }
        }
        if(flag == 0)
        {
            cout << "YES" <<endl;
        }
        else
        {
            cout << "NO" <<endl;
        }
    }
}
