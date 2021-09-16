
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
        string s1, s2;
        cin >> s1 >> s2;
        ll cnt = 0, flg = 0, a;
        for (ll i = 0; i < n; i++)
        {
            //cout << i << endl;
            if (s1[i] != s2[i])
            {
                cnt += 2;
            }
            else
            {
                if (s1[i] == '1' && s2[i] == '1')
                {
                    if (n == 1)
                    {
                        break;
                    }
                    if (i < n - 1)
                    {
                        if (s1[i + 1] == '1' && s2[i + 1] == '1')
                        {
                            continue;
                        }
                        else
                        {
                            //cout << "a" << endl;
                            cnt += 2;
                            i++;
                        }
                    }
                }
                else if (s1[i] == '0' && s2[i] == '0')
                {

                    if (n == 1)
                    {
                        cnt++;
                        break;
                    }
                    if (i < n - 1)
                    {
                        //cout << i << endl;
                        if (s1[i + 1] == '0' && s2[i + 1] == '0')
                        {
                            cnt += 1;
                            // if (i == n - 2)
                            // {
                            //     flg++;
                            // }
                        }
                        // else if (s1[i + 1] == '1' && s2[i + 1] == '1')
                        // {
                        //     cnt += 2;
                        //     i++;
                        // }
                        else if (s1[i + 1] == '1' && s2[i + 1] == '1')
                        {
                            cnt += 2;
                            i++;
                        }
                        else
                        {
                            cnt += 1;
                        }
                    }
                    else if (i == n - 1)
                    {
                        cnt++;
                    }
                }
            }
            //cout << i << " " << cnt << endl;
        }
        // if (flg > 0)
        // {
        //     cnt++;
        // }

        cout << cnt << endl;
    }
}