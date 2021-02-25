#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, x,y;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    int m;
    cin >> m;
    int b[m];
    for(int l=0; l<m; l++)
    {
        cin >> b[l];
    }
    int z=0;
    for(int p=0; p<n; p++)
    {
        for(int j=0; j<m; j++)
        {
            int sum=0, cnt=0;
            sum = a[p] + b[j];
            //cout << sum<<endl;
            for(int k=0; k<n; k++)
            {
                if(sum == a[k])
                {
                    break;
                }
                else
                {
                    cnt++;
                }
            }
             for(int q=0; q<m; q++)
            {
                if(sum == b[q])
                {
                    break;
                }
                else
                {
                    cnt++;
                }
            }
            if(cnt==m+n)
            {
                z++;
                x = a[p];
                y = b[j];
                break;
            }
        }
        if(z>0)
        {
            break;
        }
    }
    cout << x << " " << y <<endl;
}
