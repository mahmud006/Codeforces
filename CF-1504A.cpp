#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        string s1, s2 = "a";
        s1 = s + "a";
        s2 += s;
        string s3 = s1;
        reverse(s1.begin(), s1.end());
        string s4 = s2;
        reverse(s2.begin(), s2.end());
        if (s1 == s3 && s2 == s4)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            if (s1 == s3)
            {
                cout << s4 << endl;
            }
            else
            {
                cout << s3 << endl;
            }
        }
    }
}