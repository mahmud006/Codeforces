#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,l,r,mn=1, m1=1,mx=1,m2=1;
    cin >> n>>l>>r;
    for(int i=0; i<l-1; i++)
    {
        m1 *= 2;
        mn += m1;
    }
    mn += n-l;
    for(int i=0; i<n-1; i++)
    {
        if(r>1)
        {
            m2 *= 2;
            r--;
        }
        mx += m2;
    }
    cout << mn << " " <<mx <<endl;
}
