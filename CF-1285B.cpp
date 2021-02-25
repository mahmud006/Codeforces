#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,sum1=0, k=0;
        cin >> n;
        int arr[n];
        int sum2[n];
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
            sum1 += arr[i];
            sum2[k] = arr[i];
            k++;
        }

//        if(n>2)
//        {
//            for(int i=0; i<n-1; i++)
//            {
//                for(int j=i+1; j<n; j++)
//                {
//                    if(i ==0 && j ==n-1)
//                    {
//                        continue;
//                    }
//                    else
//                    {
//                    sum2[k] = arr[i] + arr[j];
//                    k++;
//                    }
//                }
//            }
//        }
        int *m = max_element(arr+1, arr+n);
        int *mm = max_element(arr, arr+(n-1));
        int *mx = max_element(sum2, sum2+k);
        //cout << *mx <<endl;
        if(sum1>*mx)
        {
            cout << "YES" <<endl;
        }
        else
        {
            cout << "NO" <<endl;
        }

    }
}
