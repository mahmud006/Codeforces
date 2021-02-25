#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    int m,tmp,t1,t2;
    cin >> m;
    int x[m], y[m];
    for(int i=0; i<m; i++)
    {
        cin >> x[i] >> y[i];
    }
    for(int i=0; i<m; i++)
    {
        t1 = (x[i] - 1);
        t2 = (x[i] - 2);
        tmp = arr[t1] - y[i];

        arr[t2] += arr[t1] - (tmp+1); ///up
        arr[x[i]] += tmp; ///down
        arr[t1] = 0;
    }
    for(int i=0; i<n; i++)
    {
        cout << arr[i] <<endl;
    }

}
