#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int h, m;
        cin >> h>>m;
        int res = (h*60)+m;
        cout << 1440-res <<endl;
    }
}
