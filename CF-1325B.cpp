#include<bits/stdc++.h>
using namespace std;
int cnt(int arr[], int n)
{
    sort(arr, arr + n);
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        while (i < n - 1 && arr[i] == arr[i + 1])
            i++;

        res++;
    }

    return res;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        cout << cnt(arr, n)<<endl;
    }
}
