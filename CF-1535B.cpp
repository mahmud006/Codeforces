#include <bits/stdc++.h>
using namespace std;
#define ll long long

int gc(int n1, int n2)
{
    if (n2 != 0)
        return gc(n2, n1 % n2);
    else
        return n1;
}
bool sortByEven(const int &left, const int &right)
{
    if (left & 1 && right & 1)
    {
        return left < right;
    }
    else if (left & 1)
    {
        return false;
    }
    else if (right & 1)
    {
        return true;
    }

    return left < right;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll arr[n];
        vector<int> vc;
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            vc.push_back(arr[i]);
        }
        sort(vc.begin(), vc.end(), sortByEven);
        ll res = 0;

        for (ll i = 0; i < vc.size(); i++)
        {
            for (ll j = i + 1; j < vc.size(); j++)
            {
                ll chk = gc(vc[i], vc[j] * 2);
                if (chk > 1)
                {
                    res++;
                }
            }
        }
        cout << res << endl;
    }
}
