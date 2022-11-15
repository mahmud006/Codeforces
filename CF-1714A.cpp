#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, H, M;
        cin >> n >> H >> M;
        int chk1 = (H * 60) + M;
        int h, m;
        int mn = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> h >> m;
            int chk2 = (h * 60) + m;
            // cout << chk1 << " " << chk2 << " ";
            if (chk1 > chk2)
            {
                chk2 += (24 * 60) - chk1;
                mn = chk2;
            }
            // cout << chk2 << endl;
            else
            {
                mn = min(mn, abs(chk1 - chk2));
            }
        }
        // cout << mn << endl;
        cout << mn / 60 << " " << mn % 60 << endl;
    }
}