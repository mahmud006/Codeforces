#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;
    cin >> n;
    vector<string> vc;
    for (ll i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        vc.push_back(s);
    }
    ll cnt = 0;
    for (auto x : vc)
    {
        //cout << x << endl;
        if (x == "X++" || x == "++X")
        {
            cnt++;
        }
        else
        {
            cnt--;
        }
    }
    cout << cnt << endl;
}