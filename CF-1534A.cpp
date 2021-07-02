#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        char arr[n][m];
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < m; j++)
            {
                cin >> arr[i][j];
            }
        }
        ll flg = 0;
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < m; j++)
            {
                if (arr[i][j] == 'R' && arr[i][j + 2] == 'W' || arr[i][j] == 'W' && arr[i][j + 2] == 'R')
                {
                    flg++;
                }
                for (ll k = 0; k < n; k++)
                {
                    if (arr[j][k] == 'R' && arr[j][k + 2] == 'W' || arr[j][k] == 'W' && arr[j][k + 2] == 'R')
                    {
                        flg++;
                    }
                }
            }
        }
        if (flg > 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            for (ll i = 0; i < n; i++)
            {
                for (ll j = 0; j < m; j++)
                {
                    if (arr[i][j] == '.' && (arr[i][j - 1] == 'W' || arr[i][j + 1] == 'W'))
                    {
                        arr[i][j] = 'R';
                        cout << "R";
                    }
                    else if (arr[i][j] == '.' && (arr[i][j - 1] == 'R' || arr[i][j + 1] == 'R'))
                    {
                        arr[i][j] = 'W';
                        cout << "W";
                    }
                    else if (arr[i][j] == '.')
                    {
                        arr[i][j] = 'W';
                        cout << "W";
                    }
                    else
                    {
                        cout << arr[i][j];
                    }
                }
                cout << endl;
            }
        }
    }
}
