#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, a, b;
        cin >> n>>a>>b;
        string s;
        int i = 0;
        for(int j=0; j<n; j+=b)
        {
            int k = 0;
            for(char c='a'; c<='z'; c++)
            {
                if(k==b)
                {
                    break;
                }
                if(i==n)
                {
                    break;
                }
                s += c;
                i++;
                k++;
            }
        }
        cout << s <<endl;
    }
}
