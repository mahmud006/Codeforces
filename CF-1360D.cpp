#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n,k;
        cin >> n>>k;
        if(k>=n)
        {
            cout << 1<<endl;
        }
        else
        {
            if(isPrime(n)==true)
            {
                cout << n <<endl;
            }
            else
            {
                while(1)
                {
                if(n%k==0)
                {
                    cout << n/k <<endl;
                    break;
                }
                k--;
                }
            }
        }
    }
}
