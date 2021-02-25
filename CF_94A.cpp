#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s, str[10], str1[10];;
    cin >> s;
    for(int i=0; i<10; i++)
    {
        cin >> str[i];
    }
    int k=0;
    for(int i=0; i<s.size(); i+=10)
    {
        str1[k] = s.substr(i, 10);
        k++;
    }
    for(int i=0; i<k; i++)
    {
        for(int j=0; j<10; j++)
        {
            if(str1[i]==str[j])
            {
                cout << j;
                break;
            }
        }
    }
}
