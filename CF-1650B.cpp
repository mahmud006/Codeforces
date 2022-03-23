#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll l, r, a;
        cin >> l >> r >> a;
        ll chk1 = 0, chk2 = 0, chk3 = 0;
        ll c1, c2, chk4 = 0, chk5 = 0;
        if (a <= l || a >= r)
        {
            chk1 = (r / a) + (r % a);
            chk2 = ((r - 1) / a) + ((r - 1) % a);
            c1 = r / a;
            c2 = (c1 * a);
            if (c2 >= l && c2 <= r)
            {
                chk4 = (c2 / a) + (c2 % a);
                if (c2 - 1 >= l && c2 - 1 <= r)
                {
                    chk5 = ((c2 - 1) / a) + ((c2 - 1) % a);
                }
            }
            cout << max(chk5, max(chk4, max(chk1, chk2))) << endl;
        }
        // else if ()
        // {
        //     chk1 = (r / a) + (r % a);
        //     chk2 = ((r - 1) / a) + ((r - 1) % a);
        //     cout << max(chk1, chk2) << endl;
        // }
        else
        {
            // if (a > l)
            //{
            chk1 = ((a - 1) / a) + ((a - 1) % a);
            //}
            chk2 = (r / a) + (r % a);
            chk3 = ((r - 1) / a) + ((r - 1) % a);
            c1 = r / a;
            c2 = (c1 * a);
            if (c2 >= l && c2 <= r)
            {
                chk4 = (c2 / a) + (c2 % a);
                if (c2 - 1 >= l && c2 - 1 <= r)
                {
                    chk5 = ((c2 - 1) / a) + ((c2 - 1) % a);
                }
            }
            cout << max(chk5, max(chk4, max(chk3, max(chk1, chk2)))) << endl;
        }
    }
}