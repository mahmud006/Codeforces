#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int s,res=0;
        cin >> s;
        while(s>0)
        {
            if(s/10 > 0)
            {
                int x = s;
                res += (s/10) * 10;
                s += ((s/10) * 10)/10;
                s -= (x/10) * 10;
            }
            else
            {
                res += (s/1) * 1;
                s += ((s/1) * 1)/10;
                s -= (s/1) * 1;
            }
        }
        cout << res <<endl;
    }
}
