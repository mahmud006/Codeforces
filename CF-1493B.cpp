#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll h, m;
        cin >> h >> m;
        string s;
        cin >> s;
        string s1, s2;
        ll flg = 0;
        for (ll i = 0; i < s.size(); i++)
        {
            if (s[i] == ':')
            {
                flg++;
                continue;
            }
            if (flg == 0)
            {
                s1 += s[i];
            }
            else
            {
                s2 += s[i];
            }
        }
        ll hour = stoi(s1);
        ll min = stoi(s2);
        ll flg1 = 0;
        string str1 = "00", str2 = "00", str3 = "00", str4 = "00";
        for (ll i = hour; i < h; i++)
        {
            string st1 = to_string(i);
            ll c1 = 0;
            for (ll k = 0; k < st1.size(); k++)
            {
                if (st1[k] == '0' || st1[k] == '1' || st1[k] == '2' || st1[k] == '5' || st1[k] == '8')
                {
                    c1++;
                }
            }
            if (c1 == st1.size())
            {
                for (ll j = min; j < m; j++)
                {
                    string st2 = to_string(j);
                    ll c2 = 0;
                    for (ll k = 0; k < st2.size(); k++)
                    {
                        if (st2[k] == '0' || st2[k] == '1' || st2[k] == '2' || st2[k] == '5' || st2[k] == '8')
                        {
                            c2++;
                        }
                    }
                    if (c2 == st2.size())
                    {
                        reverse(st1.begin(), st1.end());
                        reverse(st2.begin(), st2.end());
                        if (st1.size() == 1)
                        {
                            st1 += '0';
                        }
                        if (st2.size() == 1)
                        {
                            st2 += '0';
                        }
                        // cout << st1 << endl;
                        // cout << st2 << endl;
                        if ((stoi(st2) <= h && stoi(st2) >= hour) && (stoi(st1) <= m))
                        {
                            if (stoi(st2) == h && stoi(st1) >= min)
                            {
                                reverse(st1.begin(), st1.end());
                                reverse(st2.begin(), st2.end());
                                //cout << st1 << ":" << st2 << endl;
                                str1 = st1;
                                str2 = st2;
                                flg1++;
                                break;
                            }
                            else
                            {
                                reverse(st1.begin(), st1.end());
                                reverse(st2.begin(), st2.end());
                                //cout << st1 << ":" << st2 << endl;
                                str1 = st1;
                                str2 = st2;
                                flg1++;
                                break;
                            }
                        }
                    }
                }
            }
            if (flg1 > 0)
            {
                break;
            }
        }

        //backwards
        ll flg2 = 0;
        for (ll i = hour - 1; i > 0; i--)
        {
            string st3 = to_string(i);
            ll c3 = 0;
            for (ll k = 0; k < st3.size(); k++)
            {
                if (st3[k] == '0' || st3[k] == '1' || st3[k] == '2' || st3[k] == '5' || st3[k] == '8')
                {
                    c3++;
                }
            }
            if (c3 == st3.size())
            {
                for (ll j = min - 1; j > 0; j--)
                {
                    string st4 = to_string(j);
                    ll c4 = 0;
                    for (ll k = 0; k < st4.size(); k++)
                    {
                        if (st4[k] == '0' || st4[k] == '1' || st4[k] == '2' || st4[k] == '5' || st4[k] == '8')
                        {
                            c4++;
                        }
                    }
                    if (c4 == st4.size())
                    {
                        reverse(st3.begin(), st3.end());
                        reverse(st4.begin(), st4.end());
                        if (st3.size() == 1)
                        {
                            st3 += '0';
                        }
                        if (st4.size() == 1)
                        {
                            st4 += '0';
                        }
                        // cout << st1 << endl;
                        // cout << st2 << endl;
                        if ((stoi(st4) <= h && stoi(st4) >= hour) && (stoi(st3) <= m))
                        {
                            if (stoi(st4) == h && stoi(st3) >= min)
                            {
                                reverse(st3.begin(), st3.end());
                                reverse(st4.begin(), st4.end());
                                //cout << st3 << ":" << st4 << endl;
                                str3 = st3;
                                str4 = st4;
                                flg2++;
                                break;
                            }
                            else
                            {
                                reverse(st3.begin(), st3.end());
                                reverse(st4.begin(), st4.end());
                                //cout << st3 << ":" << st4 << endl;
                                str3 = st3;
                                str4 = st4;
                                flg2++;
                                break;
                            }
                        }
                    }
                }
            }
            if (flg2 > 0)
            {
                break;
            }
        }

        if (flg1 == 0 && flg2 == 0)
        {
            cout << "00:00" << endl;
        }
        else
        {
            ll chk1, chk2, chk3, ch1, chk4;
            if (flg1 > 0)
            {
                chk1 = stoi(str1);
                chk2 = stoi(str2);
                ch1 = chk1 - hour;

                if (chk2 < min)
                {
                    chk3 = ch1 * m - chk2;
                }
                else
                {
                    chk3 = ch1 * m + (chk2 - chk1);
                }
            }
            if (flg2 > 0)
            {
                chk1 = stoi(str1);
                chk2 = stoi(str2);
                ch1 = chk1 - hour;

                if (chk2 < min)
                {
                    chk4 = ch1 * m - chk2;
                }
                else
                {
                    chk4 = ch1 * m + (chk2 - chk1);
                }
            }

            ll chk5 = h * m + min;
            if (chk3 <= chk4 && chk3 < chk5)
            {
                cout << str1 << ":" << str2 << endl;
            }
            else if (chk4 < chk3 && chk4 < chk5)
            {
                cout << str3 << ":" << str4 << endl;
            }
            else
            {
                cout << "00:00" << endl;
            }
        }
    }
}