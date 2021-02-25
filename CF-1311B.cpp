#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,m,f=0;
        cin >> n>>m;
        int arr[n], pos[m],a[n];
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
            a[i] = arr[i];
        }
        for(int i=0; i<m; i++)
        {
            cin >> pos[i];
        }
        int cnt =0;
        while(1)
        {
            cnt++;
            for(int i=0; i<m; i++)
            {
                if(arr[pos[i]-1] > arr[pos[i]])
                {
                    swap(arr[pos[i]-1], arr[pos[i]]);
                }
            }
            if(cnt==m) break;
        }
        sort(a, a+n);
        for(int i=0; i<n; i++)
        {
            if(a[i]==arr[i])
            {
                f++;
            }
        }
        if(f==n)
        {
            cout << "YES" <<endl;
        }
        else
        {
            cout << "NO" <<endl;
        }
    }
}
