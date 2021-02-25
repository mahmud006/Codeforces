#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,m;
        cin>> n>>m;
        int pos[m];
        string str;
        cin >> str;
        for(int i=0; i<m; i++)
        {
            cin >> pos[i];
            string s2 = str.substr(0, pos[i]);
            str+=s2;
        }
        int i = 0, alphabet[26] = {0}, j;
        while (str[i] != '\0')
        {
            j = str[i] - 'a';
            ++alphabet[j];
            ++i;
        }
        for (i = 0; i < 26; i++)
            cout<< alphabet[i] <<" ";
        cout << endl;
    }
}
