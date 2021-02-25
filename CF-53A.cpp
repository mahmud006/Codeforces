#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1;
    cin >> s1;
    int n;
    cin >> n;
    string s2[n], s3[n];
    int flag = 0, j=0;
    for(int i=0; i<n; i++)
    {
        cin >> s2[i];
        if(s1 == s2[i].substr(0, s1.size()))
        {
            flag++;
            s3[j] = s2[i];
            j++;
        }
    }
    if(flag>0)
    {
        sort(s3, s3+j);
        cout << s3[0] <<endl;
    }
    else
    {
        cout << s1 <<endl;
    }

}
