#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string s;
    cin >> s;
    ll chk = 1, num = 0, c1 = 0;
    for (ll i = s.size() - 1; i >= 0; i--)
    {
        if (s[i] == '1')
        {
            num += chk;
            c1++;
        }
        //chk = chk * 2;
    }
    cout << c1 << endl;
    ll ch = 0, ch1 = 0, cnt = 0;
    while (1)
    {
        ch = pow(4, ch1);
        if (ch >= num)
        {
            break;
        }
        ch1++;
        cnt++;
        //cout << ch << endl;
    }
    cout << cnt << endl;
}
