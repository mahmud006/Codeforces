#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;
    cin >> n;
    ll sum = 0, chk = 1, lo, hi, cnt = 0;
    while (1)
    {
        sum += 5 * chk;
        if (sum >= n)
        {
            hi = sum;
            lo = sum - 5 * chk;
            break;
        }
        chk = chk * 2;
    }
    //cout << lo << endl;
    //cout << hi << endl;
    //cout << chk << endl;
    for (ll i = lo + chk; i <= hi; i += chk)
    {
        cnt++;
        if (n <= i)
        {
            break;
        }
    }
    if (cnt == 1)
    {
        cout << "Sheldon" << endl;
    }

    if (cnt == 2)
    {
        cout << "Leonard" << endl;
    }
    if (cnt == 3)
    {
        cout << "Penny" << endl;
    }
    if (cnt == 4)
    {
        cout << "Rajesh" << endl;
    }
    if (cnt == 5)
    {
        cout << "Howard" << endl;
    }
}