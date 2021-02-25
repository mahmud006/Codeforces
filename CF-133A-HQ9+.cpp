#include<bits/stdc++.h>
using namespace std;
int main()
{
    string p;
    cin >> p;
    bool flag = false;
    for(int i=0; i<p.size(); i++)
    {
        if(p[i]=='H' || p[i]=='Q' || p[i]=='9')
        {
            flag = true;
        }
    }
    if(flag)
    {
        cout << "YES" <<endl;
    }
    else
    {
        cout << "NO" <<endl;
    }
}
