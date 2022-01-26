#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll mod = 1000003;
int binaryToDecimal(string n)
{
    string num = n;
    ll dec_value = 0;
    ll base = 1;

    ll len = num.length();
    for (ll i = len - 1; i >= 0; i--)
    {
        if (num[i] == '1')
        {
            dec_value += base % mod;
            dec_value = dec_value % mod;
        }
        base = ((base % mod) * 2) % mod;
    }
    return dec_value % mod;
}

int main()
{
    string s, str;
    cin >> s;
    for (ll i = 0; i < s.size(); i++)
    {
        if (s[i] == '>')
        {
            str += "1000";
        }
        if (s[i] == '<')
        {
            str += "1001";
        }
        if (s[i] == '+')
        {
            str += "1010";
        }
        if (s[i] == '-')
        {
            str += "1011";
        }
        if (s[i] == '.')
        {
            str += "1100";
        }
        if (s[i] == ',')
        {
            str += "1101";
        }
        if (s[i] == '[')
        {
            str += "1110";
        }
        if (s[i] == ']')
        {
            str += "1111";
        }
    }
    cout << binaryToDecimal(str) << endl;
}