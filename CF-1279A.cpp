#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long r,g,b;
        cin >> r>>g>>b;
        if(r==b && r==g)
        {
            cout << "Yes" <<endl;
        }
        if(r==g && r>b)
        {
            cout << "Yes" <<endl;
        }
        if(r==b && r>g)
        {
            cout << "Yes" <<endl;
        }
        if(b==g && b>r)
        {
            cout << "Yes" <<endl;
        }
        if(r>g && r>b)
        {
            if(g+b >= r-1)
            {
                cout << "Yes" <<endl;
            }
            else
            {
                cout << "No" <<endl;
            }
        }
         if(g>r && g>b)
        {
            if(r+b >= g-1)
            {
                cout << "Yes" <<endl;
            }
            else
            {
                cout << "No" <<endl;
            }
        }
         if(b>r && b>g)
        {
            if(r+g >= b-1)
            {
                cout << "Yes" <<endl;
            }
            else
            {
                cout << "No" <<endl;
            }
        }
    }
}
