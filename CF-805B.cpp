#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin >> n;
    string s;
    while (1)
    {
        s += "b";
        if (s.size() == n)
        {
            break;
        }
        s += "b";
        if (s.size() == n)
        {
            break;
        }
        s += "a";
        if (s.size() == n)
        {
            break;
        }
        s += "a";
        if (s.size() == n)
        {
            break;
        }
    }
    cout << s << endl;
}