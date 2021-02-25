#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n], p[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i] >>p[i];
    }
    int i,j,s = 0;
    for(i=0; i<n; i++)
    {
        int sum=0;
        sum += a[i]*p[i];
        a[i] = 0;
        for(j=i+1; j<n; j++)
        {
            if(p[j]>=p[i])
            {
                sum += a[j]*p[i];
                a[j] = 0;
            }
            else
            {
                i = j-1;
                break;
            }
        }
        i = j-1;
        s += sum;
    }
    cout << s <<endl;
}
