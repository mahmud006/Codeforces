#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s, n, f=0;
    cin >> s>>n;
    int x[n], y[n];
    for(int i=0; i<n; i++)
    {
        cin >> x[i];
        cin >> y[i];
    }
    for(int i=0; i<n; i++)
        {
            if(s>x[i])
            {
                s+=y[i];
            }
            else
            {
                f++;
                break;
            }
        }
    if(f>0)
    {
        cout << "NO" <<endl;
    }
    else
    {
        cout << "YES" <<endl;
    }
}
