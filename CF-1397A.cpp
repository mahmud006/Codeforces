#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n,cnt=0;
        cin >> n;
        string s[n], str;
        for(ll i=0; i<n; i++)
        {
            cin >> s[i];
            str += s[i];
        }
        unordered_map<char, int> m;

        for (int i = 0; i < str.length(); i++)
        {
            m[str[i]]++;
        }
        unordered_map<char, int>:: iterator j;
        for (j = m.begin(); j != m.end(); j++)
        {
            if((j->second)%n==0)cnt++;
        }
        if(cnt==m.size())
        {
            cout << "YES" <<endl;
        }
        else
        {
            cout << "NO" <<endl;
        }

    }
}
