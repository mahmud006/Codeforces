#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin >> n;
    while(n--)
    {
        ll r,g,b,w,cnt=0,c=0;
        cin >> r>>g>>b>>w;
        if(r%2==0) cnt++;
        else c++;
        if(g%2==0) cnt++;
        else c++;
        if(b%2==0) cnt++;
        else c++;
        if(w%2==0) cnt++;
        else c++;

        if(cnt==4 || cnt==3 || c==4)
        {
            cout << "YES" <<endl;
        }
        else if(cnt==c)
        {
            cout << "NO" <<endl;
        }
        else
        {
            if(r==0 || g==0||b==0)
            {
                cout << "NO" <<endl;
            }
            else
            {
                cout << "YES" <<endl;
            }
        }

    }
}
