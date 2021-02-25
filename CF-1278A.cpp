#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string p, h;
        cin >> p >> h;
        if (h.find(p) != std::string::npos)
        {
            cout << "YES" << endl;
        }
        else
        {
            ll chk1 = INT_MAX, chk2 = -1,c=0,x=0;
            for (ll i = 0; i < p.size(); i++)
            {
                for (ll j = x; j < h.size(); j++)
                {
                    if (p[i] == h[j])
                    {
                        cout << j <<':' <<h[j] <<endl;
                        if (j < chk1)
                        {
                            chk1 = j;
                        }
                        if (j > chk2)
                        {
                            chk2 = j;
                            cout << chk2 <<endl;
                        }
                        c++;
                        x=j+1;
                        break;
                    }
                }
            }
            if(c==p.size())
            {
                cout << chk1 <<endl;
                cout << chk2 <<endl;
                string st = h.substr(chk1, chk2-chk1);
                cout << st <<endl;
            }
        }
    }
}
