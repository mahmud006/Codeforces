#include<bits/stdc++.h>
using namespace std;
int CountDistinct(string s)
{
    unordered_map<char, int> m;
    for(int i=0; i<s.length(); i++)
    {
        m[s[i]]++;
    }
    return m.size();
}
int main()
{
    string str;
    cin >> str;
    int res = CountDistinct(str);
    if(res%2==0)
    {
        cout << "CHAT WITH HER!" <<endl;
    }
    else
    {
        cout << "IGNORE HIM!" <<endl;
    }
}
