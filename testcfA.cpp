///ALLAH HU AKBAR
///Bismillahir Rahmanir Rahim
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {

        string str;
        cin >> str;
        stack<char> s;
        cout << s.size() << endl;

        int flag;
        for (int i = 0; i < str.size(); i++)
        {
            //cout << "abc" <<endl;
            if (str[i] == '(')
            {
                s.push(str[i]);
            }
            else if (str[i] == '?' && s.top() == '(')
            {
                cout << "ab" <<endl;
                s.pop();
            }
            else if (str[i] == '?')
            {
                //cout << "ab" <<endl;
                s.push('(');
            }
            else if (str[i] == ')')
            {
                cout << "ab" <<endl;
                cout <<"abc "<< s.top() <<endl;
                if (s.top() == '(')
                {
                    s.pop();
                }
                else
                {
                    //cout << "ab" <<endl;
                    flag = 1;
                    break;
                }
            }
        }
        cout << "SSSS" << endl;
        if (flag == 1)
            cout << "NO" << endl;
        else if (s.empty())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        //str.clear();
    }
}
