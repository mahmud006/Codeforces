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
        string s, st;
        ll sum = 0;
        if (n % 2 == 0)
        {
            s += '2';
            sum += 2;
            if (sum == n)
            {
                cout << s << endl;
                // break;
            }
            else
            {
                while (sum <= n)
                {
                    s += '1';
                    sum += 1;
                    if (sum == n)
                    {
                        st = s;
                        reverse(s.begin(), s.end());
                        cout << max(stoi(s), stoi(st)) << endl;
                        break;
                    }
                    s.insert(0, "1");
                    sum += 1;
                    if (sum == n)
                    {
                        st = s;
                        reverse(s.begin(), s.end());
                        cout << max(stoi(s), stoi(st)) << endl;
                        break;
                    }
                    s += '2';
                    sum += 2;
                    if (sum == n)
                    {
                        st = s;
                        reverse(s.begin(), s.end());
                        cout << max(stoi(s), stoi(st)) << endl;
                        break;
                    }
                    s.insert(0, "2");
                    sum += 2;
                    if (sum == n)
                    {
                        st = s;
                        reverse(s.begin(), s.end());
                        cout << max(stoi(s), stoi(st)) << endl;
                        break;
                    }
                }
            }
        }
        else
        {
            s += '1';
            sum += 1;
            if (sum == n)
            {
                cout << s << endl;
                // break;
            }
            else
            {
                while (sum <= n)
                {
                    s += '2';
                    sum += 2;
                    if (sum == n)
                    {
                        st = s;
                        reverse(s.begin(), s.end());
                        cout << max(stoi(s), stoi(st)) << endl;
                        break;
                    }
                    s.insert(0, "2");
                    sum += 2;
                    if (sum == n)
                    {
                        st = s;
                        reverse(s.begin(), s.end());
                        cout << max(stoi(s), stoi(st)) << endl;
                        break;
                    }
                    s += '1';
                    sum += 1;
                    if (sum == n)
                    {
                        st = s;
                        reverse(s.begin(), s.end());
                        cout << max(stoi(s), stoi(st)) << endl;
                        break;
                    }
                    s.insert(0, "1");
                    sum += 1;
                    if (sum == n)
                    {
                        st = s;
                        reverse(s.begin(), s.end());
                        cout << max(stoi(s), stoi(st)) << endl;
                        break;
                    }
                }
            }
        }
    }
}