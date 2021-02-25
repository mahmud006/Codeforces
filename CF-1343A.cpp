#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        for(int i=3; i<=n; i+=i+1)
        {
            if(n%i==0)
            {
                cout << n/i <<endl;
                break;
            }
        }
    }
}
