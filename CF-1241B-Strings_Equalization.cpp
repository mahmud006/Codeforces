#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    for(int i=0; i<q; i++)
    {
        string s,t;
        cin >> s >> t;
        if(s.size()==1)
        {
            if(s==t)
            {
                cout << "YES" <<endl;
            }
            else
            {
                cout << "NO" <<endl;
            }
        }
        else
        {
            int count=0;
            for(int i=0; i<s.size(); i++)
            {
                if(i==1)
                {
                    for(int j=0; j<=i+1; j++)
                    {
                        if(s[i]==t[j])
                        {
                            count++;
                            break;
                        }
                    }
                }
                else
                {
                    for(int j=i-1; j<=i+1; j++)
                    {
                        if(s[i]==t[i])
                        {
                            count++;
                            break;
                        }
                    }
                }
            }
            int res = ceil((double)(s.size()/2));
            if(count>=res)
            {
                cout << "YES" <<endl;
            }
            else
            {
                cout << "NO" <<endl;
            }
        }
    }
}
