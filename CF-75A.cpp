#include<bits/stdc++.h>
using namespace std;
//remove all zeros
int removeZeros(int x)
{
    int result = 0;
    int multiplier = 1;
    while (x > 0)
    {
        int digit = x % 10;
        if (digit != 0)
        {
            int val = digit * multiplier;
            result += val;
            multiplier *= 10;
        }
        x = x / 10;
    }
    return result;
}
int main()
{
    int a,b,c,d,e,f;
    cin >> a>>b;
    c = a+b;
    d = removeZeros(a);
    e = removeZeros(b);
    f = removeZeros(c);
    if((d+e) == f)
    {
        cout << "YES" <<endl;
    }
    else
    {
        cout << "NO" <<endl;
    }
}
