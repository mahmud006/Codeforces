#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        string str;
        cin >> str;
        set <char> res;
        set<char>::iterator it;
        for(int j=0; j<str.size(); j++)
        {
            if(str[j]==str[j+1])
            {
                j++;
            }
            else
            {
                res.insert(str[j]);
            }
        }
        for(it=res.begin(); it !=res.end(); it++)
        {
            cout << *it;
        }
        cout << endl;
    }
}
