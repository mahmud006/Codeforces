#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll f1(ll a, ll k)
{

    if (k == 0)
        return a;
    else
    {
        string s1 = to_string(a);
        sort(s1.begin(), s1.end());
        //cout << s1 << endl;
        //cout << s1[0] << endl;
        ll n1 = s1[0] - '0';
        ll n2 = s1[s1.size() - 1] - '0';
        //cout << n1 << " " << n2 << endl;
        a += n1 * n2;
        if (n1 * n2 == 0)
            return a;
        //cout << a << endl;
    }
    //cout << a << endl;
    return f1(a, k - 1);
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, k;
        cin >> a >> k;
        cout << f1(a, k - 1) << endl;
    }
}
