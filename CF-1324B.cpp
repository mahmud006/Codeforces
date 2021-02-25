#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while(t--)
    {
        int n,flag=0;
        cin >> n;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        for(int i=0; i<n-2; i++)
        {
            for(int j=n; j>1; j--)
            {
                if(arr[i]==arr[j])
                {
                    if(j-i>=2)
                    {
                        flag++;
                    }
                }
            }
        }
        if(flag>0)
        {
            cout << "YES" <<endl;
        }
        else
        {
            cout << "NO" <<endl;
        }
    }

}
