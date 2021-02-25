#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    double h, l;
    cin >> h >> l;
    double c1 = ((l * l) - (h * h)) / (2 * h);
    cout << fixed << setprecision(13) << c1 << endl;
}