#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, cnt=0, j=0;
        string s,str[2];
        cin >> n >> s;
        for(int i=0; i<n; i++)
        {
            int x = s[i] - '0';
            if(x%2 != 0)
            {
                cnt++;
                str[j] = s[i];
                j++;
            }
            if(cnt==2)
            {
                break;
            }
        }
        if(cnt!=2)
        {
            cout << -1 <<endl;
        }
        else
        {
            for(int i=0; i<j; i++)
                cout << str[i];
            cout << endl;
        }

    }
}
