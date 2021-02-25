#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll d1,d2,d3;
    cin >> d1>>d2>>d3;
    ll m1 = min((d1+d3)*2, (d1+d2+d3));
    ll m2 = min((d2+d3)*2, (d1+d2)*2);
    cout << min(m1,m2) <<endl;
}