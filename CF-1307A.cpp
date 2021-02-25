#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,d;
        cin >> n>>d;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        int cnt = arr[0];
        for(int i=1; i<n; i++)
        {
            while(arr[i]>0)
            {
                int check = i;
                d -= i;
                if(d<0) break;
                cnt++;
                arr[i]--;
            }
        }
        cout << cnt << endl;
    }
}
