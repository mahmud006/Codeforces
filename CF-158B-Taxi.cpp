#include<bits/stdc++.h>
using namespace std;
int freq[5];
int main()
{
    int n,sum=0;
    cin >> n;
    int arr[n];
    memset(freq, 0, 5);
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
        int x = arr[i];
        freq[x]++;
    }
    sum += freq[4];
    if(freq[1] <= freq[3])
    {
        sum+=freq[3];
        sum += freq[2]/2;
        if(freq[2]%2 != 0) sum++;
    }
    else
    {
        sum+=freq[3];
        freq[1]-=freq[3];

        int x = (2*freq[2])+freq[1];
        sum += x/4;
        if(x%4 != 0) sum++;
    }
    cout << sum <<endl;
}
