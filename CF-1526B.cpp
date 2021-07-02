#include <bits/stdc++.h>
using namespace std;
#define ll long long

// ll count_digit(ll number)
// {
//     ll count = 0;
//     while (number != 0)
//     {
//         number = number / 10;
//         count++;
//     }
//     return count;
// }
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        // ll flg = 0;
        // while (1)
        // {
        //     string s = to_string(n);
        //     ll chk = s.size();
        //     //cout << s << endl;
        //     //ll chk = count_digit(n);
        //     //cout << chk << endl;

        //     string s1;
        //     for (ll i = 0; i < chk; i++)
        //     {
        //         s1 += '1';
        //     }

        //     if (s1.size() == 1)
        //         break;
        //     //cout << s << endl;
        //     ll chk2 = stoi(s1);
        //     //cout << chk2 << endl;

        //     ll ch = ((n / 10) - ((n / 10) % 100)) * 11 + 1;
        //     cout << ch << endl;
        //     if (n % chk2 == 0)
        //     {
        //         cout << "YES" << endl;
        //         flg++;
        //         break;
        //     }
        //     else
        //     {
        //         ll chk3 = n - (n / chk2) * chk2;
        //         //cout << chk3 << endl;
        //         if (chk3 % 11 == 0)
        //         {
        //             cout << "YES" << endl;
        //             flg++;
        //             break;
        //         }
        //         else
        //         {
        //             n = chk3;
        //         }
        //     }
        // }
        // if (flg == 0)
        //     cout << "NO" << endl;
        if (n > 1099)
        {
            cout << "YES" << endl;
        }
        else
        {
            if (n % 111 == 0 || n % 11 == 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                ll chk = n - (n / 111) * 111;
                if (chk % 11 == 0)
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
}
