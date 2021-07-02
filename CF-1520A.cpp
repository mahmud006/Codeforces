#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        bool flg = true;
        bool vis[1000];
        memset(vis, 0, sizeof(vis));
        for (ll i = 0; i < s.size(); i++)
        {
            //cout << vis[s[i]] << endl;
            if (vis[s[i]] == 0)
            {
                //cout << "h" << endl;
                vis[s[i]] = 1;
            }
            else if (s[i] != s[i - 1])
            {
                flg = false;
            }
        }
        //cout << endl;
        if (flg)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}