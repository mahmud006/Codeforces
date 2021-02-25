#include <bits/stdc++.h>
using namespace std;
int isPrime[10000];
int divisors[3005];
void sieve()
{
    for (int i = 2; i <= 3000; i++)
    {
        if (isPrime[i])
        {
            continue;
        }
        for (int j = i + i; j <= 3000; j += i)
        {
            isPrime[j] = 1;
            divisors[j]++;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    sieve();
    int cnt=0;
    for (int i = 1; i <= n; i++)
    {
        if(divisors[i]==2)
        {
            cnt++;
        }
    }
    cout << cnt <<endl;
}