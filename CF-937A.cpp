#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, cnt=0;
    cin >> n;
    int arr[n];
    set <int> s;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
        if(arr[i]>0)
        {
            s.insert(arr[i]);
        }
    }
    for(auto i=s.begin(); i != s.end(); i++)
    {
        cnt++;
    }
    cout << cnt <<endl;
}
