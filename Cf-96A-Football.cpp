#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int arr[s.size()], arr1[s.size()], c=0, c1=0,j=0,k=0;
    for(int i=0; i<s.size(); i++)
    {
            if(s[i]=='0')
            {
                c1++;
                arr[j] = c;
                c=0;
                j++;
            }
            if(s[i]=='1')
            {
                c++;
                arr1[k] = c1;
                c1=0;
                k++;
            }
            if(i==s.size()-1)
            {
                arr[j] = c;
                arr1[k] = c1;
            }
    }
    int m = *max_element(arr, arr+j+1);
    int n = *max_element(arr1, arr1+k+1);
    int res = max(m,n);
    if(res>=7)
    {
        cout << "YES" <<endl;
    }
    else
    {
        cout << "NO" <<endl;
    }
}
