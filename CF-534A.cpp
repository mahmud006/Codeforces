#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,check,c1,cnt=0;
    cin >> n;
    int arr[n],j=0;
    for(int i=n; i>0; i--)
    {
        if(i%2 != 0)
        {
            cnt++;
            arr[j] = i;
            j++;
            check = i;
        }
    }
    c1=cnt;
    for(int i=n; i>0; i--)
    {
        if(i%2==0)
        {
            if(cnt==c1 && (i== check-1 || i-1==check))
            {
                continue;
            }
            else
            {
                cnt++;
                arr[j] = i;
                j++;
            }
        }
    }
    cout << cnt <<endl;
    for(int i=0; i<j; i++)
    {
        cout << arr[i] << " ";
    }
}
