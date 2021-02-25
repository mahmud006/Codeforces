#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n>>m;
    string s[n][m];
    int arr[m];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin >> s[i][j];
        }
    }
    for(int i=0; i<m; i++)
    {
        cin >> arr[i];
    }
    int k = 0;
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
                str[k] = s[i][j];
                k++;
        }
    }
}
