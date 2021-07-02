#include <bits/stdc++.h>
using namespace std;
#define ll long long
double distance(double x1, double y1, double x2, double y2)
{
    return sqrt(pow(x2 - x1, 2) +
                pow(y2 - y1, 2));
}
int main()
{
    double r, x1, y1, x2, y2;
    cin >> r >> x1 >> y1 >> x2 >> y2;

    double chk2 = ceil(distance(x1, y1, x2, y2) / (2 * r));
    cout << chk2 << endl;
}