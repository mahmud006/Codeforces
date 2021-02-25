#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long A,B;
        cin >> A>>B;
        long long check = 0;
        long long cnt = 0;
        while(check<=B)
        {
            check = check*10+9;
            if(check <=B )
            {
            cnt++;
            }
        }
        if(cnt>0)
        {
            cout << A*cnt<<endl;
        }
        else
        {
            cout << 0 <<endl;
        }
    }
}
