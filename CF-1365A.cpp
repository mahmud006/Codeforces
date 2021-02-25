#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,m;
        cin >> n>>m;
        int arr[n][m],c1,c2,col=0,row=0;
        for(int i=0; i<n; i++)
        {
            c1=0;
            for(int j=0; j<m; j++)
            {
                cin >> arr[i][j];
                if(arr[i][j]==0)
                {
                    c1++;
                    if(c1==m)
                    {
                        row++;
                    }
                }
            }
        }
        for(int j=0; j<m; j++)
        {
            c2=0;
            for(int i=0; i<n; i++)
            {
                if(arr[i][j]==0)
                {
                    c2++;
                    if(c2==n)
                    {
                        col++;
                    }
                }
            }
        }
        int mn = min(row,col);
        if(mn%2==0)
        {
            cout << "Vivek" <<endl;
        }
        else
        {
            cout << "Ashish" <<endl;
        }
    }
}
