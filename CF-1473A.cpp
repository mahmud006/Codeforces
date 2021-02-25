#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, d;
        cin >> n >> d;
        int arr[n];
        int c1 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] <= d)
            {
                c1++;
            }
        }
        if (c1 == n)
        {
            cout << "YES" << endl;
        }
        else
        {

            sort(arr, arr + n);
            if (arr[0] + arr[1] <= d)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}