#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,cnt=0;
        cin >> n;
        string s;
        cin >> s;
        while(1)
        {
            bool flag = 0;
            for(int i=0; i<n; i++)
            {
                if(s[i]=='A' && s[i+1]=='P')
                {
                    s[i+1] = 'A';
                    flag = 1;
                    i++;
                }
            }
            if(flag==0)
            {
                break;
            }
            cnt++;
        }
        cout << cnt <<endl;
    }
}
