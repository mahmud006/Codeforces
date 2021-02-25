#include<bits/stdc++.h>
using namespace std;
int c[200];
int main()
{
    int n,cnt=0;
    cin >> n;
    string s;
    cin >> s;
    for(int i=0; i<s.size(); i++)
    {
        if(islower(s[i]))
        {
            c[s[i]]++;
        }
        else
        {
            if(c[tolower(s[i])]==0)
            {
                cnt++;
            }
            else
            {
                c[tolower(s[i])]--;
            }
        }
    }
    cout << cnt <<endl;
}
