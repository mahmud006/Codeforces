#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n, m;
    cin >> n >> m;
    ll c1, c2, c3, c4, flg = 0,f1=0;
    if (n % m == 0)
    {
        c4 = n;
        f1++;
    }
    for (ll i = n / 2; i >= 1; i--)
    {
        c1 = i * 2;
        c2 = n - c1;
        
        if ((i + c2) % m == 0)
        {
            c3 = i + c2;
            flg++;
            break;
        }
    }
    //cout << c3 <<endl;
    if (flg == 0 && f1==0)
    {
        cout << -1 << endl;
    }
    else
    {
        if(f1>0 && flg>0)
        {
        cout << min(c3, c4) << endl;
        }
        else if(flg>0 && f1==0)
        {
        cout << c3 << endl;
        }
        else
        {
            cout << c4 <<endl;
        }
        
    }
}