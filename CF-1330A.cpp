#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,x,cnt=0;
        cin >> n>> x;
        int arr[n],y=x;
        vector<int> v;
        int mx = 0,flg=0,f=0;
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
            if(arr[i]>mx)
            {
                mx=arr[i];
            }
            v.push_back(arr[i]);
        }
        ///erase duplicate
        sort(v.begin(), v.end());
        v.erase(unique(v.begin(), v.end()), v.end());

        for(int k=0; k<mx; k++)
        {
            int fg = 0;
            for(int i=0; i<v.size(); i++)
            {
                if(v[i] == k+1)
                {

                    cnt++;
                    fg++;
                }
            }
            if(fg==0)
            {
                if(x==0)
                {
                    break;
                }
                x--;
            }
        }
        cout << cnt+y <<endl;
    }
}
