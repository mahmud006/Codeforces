#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll n, flg=0,chk;
        cin >> n;
        ll a[n], b[n];
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        for(int i=0; i<n; i++)
        {
            cin >> b[i];
        }
        if(a[0]==b[0])
        {
            for(int i=1; i<n; i++)
            {
                for(int j=0; j<i; j++)
                {
                    if(a[j]==0 && a[j]+a[i] < b[i])
                    {
                        flg = 1;
                    }
                    else
                    {
                        chk = a[j] + a[i];
                        if(abs(chk) <= abs(b[i]))
                        {
                            continue;
                        }
                        else
                        {
                            flg = 1;
                        }
                    }
                }
            }
        }
        else
        {
            flg=1;
        }
        if(flg==0)
        {
            cout << "YES" <<endl;
        }
        else
        {
            cout << "NO" <<endl;
        }
    }

}
