#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        ll c1 = abs(a - b);
        ll c2 = abs(b - c);
        if (c1 == c2)
        {
            cout << "YES" << endl;
        }
        else
        {
            // a
            if ((b + c) % a == 0)
            {
                c1 = (b + c) - b;
                c2 = c - b;
                if (c1 == c2)
                {
                    cout << "YES" << endl;
                }
            }
            else if ((c - b) % a == 0)
            {
                c1 = (c - b) - b;
                c2 = c - b;
                if (c1 == c2)
                {
                    cout << "YES" << endl;
                }
            }
            // b
            else if ((c - a) % b == 0)
            {
                c1 = (c - a) - a;
                c2 = c - (c - a);
                if (c1 == c2)
                {
                    cout << "YES" << endl;
                }
            }
            else if ((a - c) % b == 0)
            {
                c1 = (a - c) - a;
                c2 = c - (a - c);
                if (c1 == c2)
                {
                    cout << "YES" << endl;
                }
            }
            // c
            else if ((a - b) % c == 0)
            {
                c1 = (a - b) - c;
                c2 = c - (a - b);
                if (c1 == c2)
                {
                    cout << "YES" << endl;
                }
            }
            else if ((b - a) % c == 0)
            {
                c1 = (b - a) - c;
                c2 = c - (b - a);
                if (c1 == c2)
                {
                    cout << "YES" << endl;
                }
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}