#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,sum=0;
        cin >> n;
        int arr[n], mx;
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        vector<int> v;
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(arr[i]>0 && arr[j]>0)
                {

                }
                if(arr[i]<0 && arr[j]<0)
                {

                }


            }
        }
//        for(int i=0; i<v.size(); i++)
//        {
//            cout << v[i] <<endl;
//        }
        cout << sum <<endl;
    }
}
