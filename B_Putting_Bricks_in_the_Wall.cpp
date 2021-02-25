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
        char arr[n][n];
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < n; j++)
            {
                cin >> arr[i][j];
            }
        }
        if ((arr[0][1] == '0' && arr[1][0] == '0')  && (arr[n-2][n-1] == '1' && arr[n-1][n-2] == '1'))
        {
            cout << 0 << endl;
        }
        else if ((arr[0][1] == '1' && arr[1][0] == '1')  && (arr[n-2][n-1] == '0' && arr[n-1][n-2] == '0'))
        {
            cout << 0 << endl;
        }
        else if ((arr[0][1] == '1' && arr[1][0] == '1')  && (arr[n-2][n-1] == '1' && arr[n-1][n-2] == '1'))
        {
            cout << 2 << endl;
            cout << 1 << " " << 2 << endl;
            cout << 2 << " " << 1 << endl;
        }
        else if ((arr[0][1] == '0' && arr[1][0] == '0')  && (arr[n-2][n-1] == '0' && arr[n-1][n-2] == '0'))
        {
            cout << 2 << endl;
            cout << 1 << " " << 2 << endl;
            cout << 2 << " " << 1 << endl;
        }

        else if ((arr[0][1] == '0' && arr[1][0] == '1') && (arr[n-2][n-1] == '1' && arr[n-1][n-2] == '0'))
        {
            cout << 2 << endl;
            cout << 1 << " " << 2 << endl;
            cout << n - 1 << " " << n << endl;
        }
        else if((arr[0][1] == '1' && arr[1][0] == '0') && (arr[n-2][n-1] == '0' && arr[n-1][n-2] == '1'))
        {
            cout << 2 << endl;
            cout << 1 << " " << 2 << endl;
            cout << n - 1 << " " << n << endl;
        }
        else if((arr[0][1] == '0' && arr[1][0] == '1') && (arr[n-2][n-1] == '0' && arr[n-1][n-2] == '1'))
        {
            cout << 2 << endl;
            cout << 1 << " " << 2 << endl;
            cout << n << " " << n-1 << endl;
        }
        else if((arr[0][1] == '1' && arr[1][0] == '0') && (arr[n-2][n-1] == '1' && arr[n-1][n-2] == '0'))
        {
            cout << 2 << endl;
            cout << 1 << " " << 2 << endl;
            cout << n << " " << n-1 << endl;
        }
        //1
        else if (arr[0][1] == '1' && arr[1][0] == '1')
        {
            if (arr[n-2][n-1] == '0' && arr[n-1][n-2] == '1')
            {
                cout << 1 << endl;
                cout << n << " " << n - 1 << endl;
            }
            else if (arr[n-2][n-1] == '1' && arr[n-1][n-2] == '0')
            {
                cout << 1 << endl;
                cout << n - 1 << " " << n << endl;
            }
        }
        //2
        else if (arr[0][1] == '0' && arr[1][0] == '0')
        {
            if (arr[n-2][n-1] == '0' && arr[n-1][n-2] == '1')
            {
                cout << 1 << endl;
                cout << n-1 << " " << n << endl;
            }
            else if (arr[n-2][n-1] == '1' && arr[n-1][n-2] == '0')
            {
                cout << 1 << endl;
                cout << n << " " << n-1 << endl;
            }
        }
        //3
        else if (arr[n-2][n-1] == '1' && arr[n-1][n-2] == '1')
        {
            if (arr[0][1] == '0' && arr[1][0] == '1')
            {
                cout << 1 << endl;
                cout << 2 << " " << 1 << endl;
            }
            else if (arr[0][1] == '1' && arr[1][0] == '0')
            {
                cout << 1 << endl;
                cout << 1 << " " << 2 << endl;
            }
        }
        //4
        else if (arr[n-2][n-1] == '0' && arr[n-1][n-2] == '0')
        {
            if (arr[0][1] == '0' && arr[1][0] == '1')
            {
                cout << 1 << endl;
                cout << 1 << " " << 2 << endl;
            }
            else if (arr[0][1] == '1' && arr[1][0] == '0')
            {
                cout << 1 << endl;
                cout << 2 << " " << 1 << endl;
            }
        }
    }
}