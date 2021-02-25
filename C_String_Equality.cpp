#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool al(string s)
{
    int n = s.length();
    for (int i = 1; i < n; i++)
        if (s[i] != s[0])
            return false;

    return true;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        string s1, s2;
        cin >> s1 >> s2;
        if (s1 == s2)
        {
            cout << "Yes" << endl;
        }
        else
        {
            ll flg = 0;
            for (ll i = 0; i < s1.size(); i++)
            {
                if (s1[i] == 'z')
                {
                    cout << "No" << endl;
                    flg++;
                    break;
                }
            }
            ll f2 = 0;
            if (flg == 0)
            {
                set<char> st1;
                set<char> st2;
                for (ll i = 0; i < s1.size(); i++)
                {
                    st1.insert(s1[i]);
                }
                for (ll i = 0; i < s2.size(); i++)
                {
                    st2.insert(s2[i]);
                }
                //cout << st1.size() << endl;
                //cout << st2.size() << endl;
                if (st1.size() == st2.size())
                {
                    ll f1 = 0;
                    for (ll i = 0; i < n - k + 1; i++)
                    {
                        if (s1[i] != s2[i])
                        {
                            string r1 = s1.substr(i, i + k - 1);
                            string r2 = s2.substr(i, i + k - 1);
                            //cout << r1 << endl;
                            //cout << r2 << endl;
                            if (al(r1) && al(r2))
                            {
                                i += k - 1;
                            }
                            else
                            {
                                f1++;
                            }
                        }
                    }

                    if (f1 == 0)
                    {
                        f2++;
                        cout << "Yes" << endl;
                    }
                    else
                    {
                        ll f3=0;
                        sort(s1.begin(), s1.end());
                        //cout << s1 <<endl;
                        for (ll i = 0; i < n - k + 1; i++)
                        {
                            if (s1[i] != s2[i])
                            {
                                string r1 = s1.substr(i, k);
                                string r2 = s2.substr(i, k);
                                //cout << r1 << endl;
                                //cout << r2 << endl;
                                if (al(r1) && al(r2))
                                {
                                    i += k -1;
                                }
                                else
                                {
                                    f3++;
                                }
                            }
                        }
                        f2++;
                        if(f3==0)
                        {
                            cout << "Yes" <<endl;
                        }
                        else
                        {
                            cout << "No" << endl;
                        }
                    }
                }
                else
                {
                    cout << "No" << endl;
                }
            }
            if (f2 == 0)
            {
                sort(s1.begin(), s1.end());
                if (s1 == s2)
                {
                    cout << "Yes" << endl;
                }
            }
        }
    }
}