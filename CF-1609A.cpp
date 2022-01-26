#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(void)
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll arr[n];
        ll sum = 0, chk = 1, mx = 0, idx;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            while (arr[i] % 2 == 0)
            {
                arr[i] /= 2;
                chk *= 2;
            }
            if (arr[i] > mx)
            {
                mx = arr[i];
                idx = i;
            }
        }
        arr[idx] *= chk;
        for (int i = 0; i < n; ++i)
        {
            sum += arr[i];
        }
        cout << sum << endl;
    }
}