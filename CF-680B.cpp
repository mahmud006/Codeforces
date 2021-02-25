#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n, a;
    cin >> n >> a;
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll cnt = 0;
    ll ck = min(a - 0 - 1, n - a);
    if (arr[a - 1] == 1)
    {
        cnt++;
    }
    if (n > 1)
    {
        if (n != a)
        {
            for (ll i = a, j = a - 2;; i++, j--)
            {
                if (arr[i] == 1 && arr[j] == 1)
                {
                    cnt += 2;
                }
                if (i == n - 1 || j == 0)
                {
                    break;
                }
            }
        }
        //cout << ck << endl;
        if (a - 0 - 1 < n - a)
        {
            for (ll i = (a - 1) + ck + 1; i < n; i++)
            {
                if (arr[i] == 1)
                {
                    //cout << "h" << endl;
                    cnt++;
                }
            }
        }
        else
        {
            for (ll j = (a - 1) - ck - 1; j >= 0; j--)
            {
                if (arr[j] == 1)
                {
                    cnt++;
                }
            }
        }
    }

    cout << cnt << endl;
}