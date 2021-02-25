#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int c=0, cnt=0;
    for(int i=0; i<str.size(); i++)
    {
        if(str[i]!=str[i-1] && i==str.size()-1)
        {
            cnt++;
        }
        else
        {
            if(str[i]==str[i+1])
            {
                c++;
                if(c==5)
                {
                    cnt++;
                    c=0;
                }
                continue;
            }
            else
            {
                c=0;
                cnt++;
            }
        }
    }
    cout << cnt <<endl;
}
