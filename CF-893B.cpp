#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin >> n;
    ll chk = 0, k = 1, res;
    while (chk <= n)
    {
        chk = (pow(2, k) - 1) * pow(2, k - 1);
        if (n % chk == 0)
        {
            res = chk;
        }
        k++;
    }
    cout << res << endl;
}