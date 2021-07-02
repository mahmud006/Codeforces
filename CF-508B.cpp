#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{

    string s;
    cin >> s;
    //cout << s << endl;
    string s1 = s, s2 = s, s3 = s;
    ll chk, flg = 0, flg1 = 0, chk1;
    ll mn = s[s.size() - 1] - '0';
    string ans;
    for (ll i = 0; i < s.size(); i++)
    {
        if ((ll)s[i] % 2 == 0)
        {
            if (flg == 0)
            {
                swap(s1[i], s1[s1.size() - 1]);
            }
            if ((s[i] - '0') < mn && flg1 == 0)
            {
                mn = s[i] - '0';
                chk = i;
                flg1++;
                //cout << mn << endl;
            }
            chk1 = i;
            flg++;
        }
    }
    if (flg > 0)
    {
        if (flg1 > 0)
        {
            swap(s2[chk], s2[s2.size() - 1]);
            swap(s3[chk1], s3[s3.size() - 1]);
            cout << max(s3, max(s1, s2)) << endl;
        }
        else
        {

            swap(s3[chk1], s3[s3.size() - 1]);
            cout << max(s3, s1) << endl;
        }
        //cout << *max_element(v.begin(), v.end()) << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}