#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,cnt=0,sum=0,sum2=0;
        cin >> n;
        int chk = n/2;
        if(chk%2!=0)
        {
            cout << "NO" <<endl;
        }
        else
        {
            cout << "YES" <<endl;
            for(int i=2; ; i++)
            {
                if(cnt==n/2)
                {
                    break;
                }
                if(i%2==0)
                {
                    cout << i << " ";
                    sum+=i;
                    cnt++;
                }
            }
            cnt=0;
            for(int i=1; ; i++)
            {
                if(cnt==n/2 - 1)
                {
                    break;
                }
                if(i%2!=0)
                {
                    cout << i << " ";
                    sum2+=i;
                    cnt++;
                }
            }
            cout << sum - sum2 <<endl;

        }
    }
}
