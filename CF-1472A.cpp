#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int w, h, n;
        cin >> w >> h >> n;
        if (n == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            if (w % 2 == 0 && h % 2 == 0)
            {
                if (w * h >= n)
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
            else if (w % 2 == 0 && h%2 !=0 && n <= w)
            {
                cout << "YES" << endl;
            }
            else if (h % 2 == 0 && w%2!=0 && n <= h)
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