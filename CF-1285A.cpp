#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,left=0, right=0;
    cin >>n;
    string s;
    cin >>s;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='L')
        {
            left++;
        }
        if(s[i]=='R')
        {
            right++;
        }
    }
    cout << left+right+1 <<endl;
}
