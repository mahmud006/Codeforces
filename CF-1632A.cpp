#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string st;
        cin >> st;
        if (st.size() >= 3)
        {
            cout << "NO" << endl;
        }
        else
        {
            if (st.size() == 2)
            {
                if (st[0] == st[1])
                {
                    cout << "NO" << endl;
                }
                else
                {
                    cout << "YES" << endl;
                }
            }
            else
            {
                cout << "YES" << endl;
            }
        }
    }
}