#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x;
        cin >> x;
        if(x%2!=0)
        {
            cout << x-1 << " " <<1 <<endl;
        }
        else
        {
            if(x==2)
            {
                cout << 1 << " " <<1 <<endl;
            }
            else
            {
                cout << x-2 << " " << 2 <<endl;
            }
        }
    }
}
