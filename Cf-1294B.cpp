#include<bits/stdc++.h>
using namespace std;
struct tmp
{
    int x;
    int y;
};
bool cmp(tmp a, tmp b)
{
    if(a.x != b.x)
    {
        return a.x < b.x;
    }
    else
    {
        return a.y < b.y;
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        tmp arr[n];
        int x[n], y[n];
        for(int i=0; i<n; i++)
        {
            cin >> x[i] >> y[i];
            arr[i].x = x[i];
            arr[i].y = y[i];
        }
        sort(arr, arr+n, cmp);

        int p = 0, q=0, k=0,flag=0;
        arr[n].x = 1001;
        arr[n].y = 1001;
        string str;
        for(int i=0; i<n; i++)
        {
            if(arr[i].y > arr[i+1].y)
            {
                flag++;
                break;
            }
        }
        if(flag>0)
        {
            cout << "NO" <<endl;
        }
        else
        {
            cout << "YES" <<endl;
            for(int i=0; i<n; i++)
            {
                for(int j=p; j<arr[i].x; j++)
                {
                    cout << "R";
                }
                p = arr[i].x;
                for(int j=q; j<arr[i].y; j++)
                {
                    cout << "U" ;
                }
                q = arr[i].y;
            }
        cout << endl;
        }
    }
}
