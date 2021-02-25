#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    double d,l,v1,v2;
    cin >> d>> l>>v1>>v2;
    double s = l-d;
    cout << setprecision(20)<<s/(v1+v2) <<endl;
}