#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,s;
    cin >> a>>b>>s;
    int check = (abs(a)+abs(b));
    if(check>s)
    {
        cout << "No" <<endl;
    }
    if(check==s)
    {
        cout << "Yes" <<endl;
    }
    if(check<s)
    {
        if(abs(check-s)%2==0)
        {
            cout << "Yes" <<endl;
        }
        else
        {
            cout << "No" <<endl;
        }
    }
}
