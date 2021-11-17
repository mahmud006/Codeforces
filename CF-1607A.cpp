#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        ll arr[1000], k = 0;
        for (ll i = 0; i < s2.size(); i++)
        {
            for (ll j = 0; j < s1.size(); j++)
            {
                if (s2[i] == s1[j])
                {
                    arr[k] = j + 1;
                    k++;
                }
            }
        }
        ll sum = 0;
        for (ll i = 0; i < k - 1; i++)
        {

            sum += abs(arr[i] - arr[i + 1]);
            //cout << arr[i] << " ";
        }
        cout << sum << endl;
    }
}