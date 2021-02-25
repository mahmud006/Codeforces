#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string s;
    cin >> s;
    ll sum1=0, sum2=0, flag=0,x;
    int pos = s.find('^');

    for(ll i=0; i<s.size(); i++)
    {
        if(s[i]=='^')
        {
            flag++;
        }
        if(isdigit(s[i]) && flag==0)
        {
            sum1 += (s[i]-'0') * (pos-i);
        }
        if(isdigit(s[i]) && flag>0)
        {
            sum2 += (s[i] - '0') *(i-pos);
        }
    }
    if(sum1>sum2)
    {
        cout << "left" <<endl;
    }
    else if(sum1<sum2)
    {
        cout << "right" <<endl;
    }
    else
    {
        cout << "balance" <<endl;
    }
}
