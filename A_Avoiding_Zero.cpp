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
        ll arr[n], brr[n], crr[n], j = 0, k = 0, sum1 = 0, sum2 = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] >= 0)
            {
                brr[j] = arr[i];
                j++;
                sum1 += arr[i];
            }
            else
            {
                crr[k] = arr[i];
                k++;
                sum2 += arr[i];
            }
        }

        if (sum1 + sum2 == 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            sort(brr, brr + j);
            sort(crr, crr + k, greater<>());
           
            if (sum1 + sum2 > 0)
            {
                cout << "YES" <<endl;
                if (brr[0] == 0)
                {
                    for (ll i = j - 1; i >= 0; i--)
                    {
                        cout << brr[i] << " ";
                    }
                    for (ll i = 0; i < k; i++)
                    {
                        cout << crr[i] << " ";
                    }
                    cout << endl;
                }
                else
                {

                    for (ll i = 0; i < j; i++)
                    {
                        cout << brr[i] << " ";
                    }
                    for (ll i = 0; i < k; i++)
                    {
                        cout << crr[i] << " ";
                    }
                    cout << endl;
                }
            }
            else
            {
                cout << "YES" <<endl;
                for (ll i = 0; i < k; i++)
                {
                    cout << crr[i] << " ";
                }
                for (ll i = 0; i < j; i++)
                {
                    cout << brr[i] << " ";
                }
                cout << endl;
            }
        }
    }
}