#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        ll n = s.size();
        vector<ll> arr;
        arr.push_back(0);
        ll flg = 0, f = 0;

        for (ll i = 0; i < n - 1; i++)
        {
            if (s[i] == 'E')
            {
                arr.push_back(flg);
            }
            if (s[i] == 'N')
            {
                if (flg == 0)
                {
                    arr.push_back(1);
                    flg = 1;
                }
                else
                {
                    arr.push_back(0);
                    flg = 0;
                }
            }
        }
        for (ll i = 0; i < arr.size() - 1; i++)
        {
            // cout << s[i] << " " << arr[i] << endl;
            if (s[i] == 'E' && arr[i] == arr[i + 1])
            {
                continue;
            }
            else if (s[i] == 'N' && arr[i] != arr[i + 1])
            {
                continue;
            }
            else
            {
                f++;
            }

            // cout << arr[i] << " ";
        }
        // cout << arr[n - 1] << endl;
        //  cout << arr[0] << " " << arr[n - 1] << endl;
        if (s[n - 1] == 'E')
        {
            if (arr[0] != arr[n - 1])
            {
                f++;
            }
        }
        else if (s[n - 1] == 'N')
        {
            if (arr[0] == arr[n - 1])
            {
                f++;
            }
        }
        if (f == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}