#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    for(int i=0; i<q; i++)
    {
        int n, flag=0, a, count=0,sum=0;
        cin >> n;
        int arr[n], k=0;
        for(int j=0; j<n; j++)
        {
            cin >> a;
            if(a==2048)
            {
                flag++;
            }
            if(a<2048)
            {
                arr[k] = a;
                k++;
            }
        }
        if(flag>0)
        {
            cout << "YES" <<endl;
        }
        else
        {
            sort(arr, arr+k, greater<>());
            for(int l=0; l<k; l++)
            {
                sum += arr[l];
                if(sum == 2048)
                {
                    count++;
                }
            }
            if(count > 0)
            {
                cout << "YES"<<endl;
            }
            else{
                cout << "NO" <<endl;
            }
        }
    }
}
