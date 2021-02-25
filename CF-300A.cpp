#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,neg=0,pos=0,f1=0,f4=0;
    cin >> n;
    int arr[n],a1[n],a2[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
        if(arr[i]<0)
        {
            a1[neg] = arr[i];
            neg++;
        }
        if(arr[i]>0)
        {
            a2[pos] = arr[i];
            pos++;
        }
    }
    if(neg%2==0 && pos>0)
    {
        f1++;
        cout << neg-1 << " ";
        for(int i=0; i<neg-1; i++)
        {
            cout << a1[i] << " ";
        }
        cout << endl;
    }
    else if(neg%2==1 && pos==0)
    {
        cout << neg-2 << " ";
        for(int i=0; i<neg-2; i++)
        {
            cout << a1[i] << " ";
        }
        cout << endl;
    }
    else if(neg%2==1 && pos>0)
    {
        cout << neg << " ";
        for(int i=0; i<neg; i++)
        {
            cout << a1[i] << " ";
        }
        cout << endl;
    }
    if(neg%2==0 && pos==0)
    {
        f4++;
        cout << neg-3 << " ";
        for(int i=0; i<neg-3; i++)
        {
            cout << a1[i] << " ";
        }
        cout << endl;
    }
    if(pos==0)
    {
        cout << 2 << " ";
        cout << a1[neg-1] << " " <<a1[neg-2] << " ";
        cout << endl;
    }
    else
    {
        cout << pos <<" ";
        for(int i=0; i<pos; i++)
        {
            cout << a2[i] << " ";
        }
        cout << endl;
    }
    if(f1>0)
    {
        cout << 2 << " ";
        cout << a1[neg-1] << " " << 0 <<endl;
    }
    else if(f4>0)
    {
        cout << 2 <<" " <<a1[neg-3] << " " << 0 <<endl;
    }
    else
    {
        cout << 1 << " " << 0 <<endl;
    }
}
