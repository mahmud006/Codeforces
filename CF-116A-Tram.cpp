#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n], sum=0;
    for(int i=0; i<n; i++)
    {
        int a, b;
        cin >> a >> b;
        sum -=a;
        sum +=b;
        arr[i] = sum;
    }
    cout << *max_element(arr, arr+n) <<endl;
}
