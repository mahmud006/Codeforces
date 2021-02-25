#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll arr[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        ll mx = *max_element(arr, arr + n);
        ll flg=0;
        for (ll i = 0; i < n; i++)
        {
            if (arr[i] == mx)
            {
                if (i == 0)
                {
                    if (arr[i] > arr[i + 1])
                    {
                        cout << i + 1 << endl;
                        flg++;
                        break;
                    }
                }
                else if (i == n - 1)
                {
                    if (arr[i] > arr[i - 1])
                    {
                        cout << i + 1 << endl;
                        flg++;
                        break;
                    }
                }
                else
                {

                    if (arr[i] > arr[i - 1] || arr[i] > arr[i + 1])
                    {
                        cout << i + 1 << endl;
                        flg++;
                        break;
                    }
                }
            }
        }
        if(flg==0)
        {
            cout <<-1 <<endl;
        }
    }
}