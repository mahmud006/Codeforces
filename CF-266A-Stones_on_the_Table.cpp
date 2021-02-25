#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,count=0;
    cin >> n;
    string s;
    cin >>s;
    for(int i=0; i<n; i++)
    {
        if(s.substr(i, 2) == "BB")
        {
            count++;
        }
        if(s.substr(i, 2) == "RR")
        {
            count++;
        }
        if(s.substr(i, 2) == "GG")
        {
            count++;
        }
    }
    cout << count <<endl;
}

