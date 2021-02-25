#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n,cnt=0,chk1,chk2,sum=0;
        cin >> n;
        while(n>=2)
        {
            //cout << "n: " <<n <<endl;
            sum = 0;
            for(ll i=1; i<=n; i++)
            {
                sum+=i;
                chk1 = (sum-i)*3 + (i*2);
                //cout << "c1: " <<chk1 <<endl;
                if(chk1>n)
                {
                    cnt++;
                    n-=chk2;
                    break;
                }
                if(chk1==n)
                {
                    cnt++;
                    n-=chk1;
                    break;
                }
                chk2 = chk1;
            }
            //cout << "n::" << n <<endl;
        }
        cout << cnt <<endl;
    }
}
