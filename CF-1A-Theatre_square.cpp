#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n,m,a;
    cin >> n >>m>>a;
    long long check, check1;
    check = ceil(n/a);
    check1 = ceil(m/a);
    cout << check*check1 <<endl;
}
