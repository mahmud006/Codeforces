#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        vector<char> vc;
        vector<char>::iterator it;
        for (ll i = 0; i < s.size(); i++)
        {
            vc.push_back(s[i]);
        }
        for (ll i = 0; i < vc.size() - 1; i++)
        {
            for (ll j = i + 1; j < vc.size(); j++)
            {
                if (vc[i] != vc[j])
                {
                    //cout << vc[i] << endl;
                    vc.erase(vc.begin() + i);
                    vc.erase(vc.begin() + j);
                    //i++;
                    break;
                }
            }
        }
        for (auto x : vc)
        {
            cout << x << endl;
        }
        if (vc.empty())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}