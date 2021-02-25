#include<bits/stdc++.h>
using namespace std;
isdistinct(int n)
{
    int temp;
    vector<int> v;
    while(n>0)
    {
        temp = n%10;
        n = n/10;
        v.push_back(temp);
    }
    int sz1 = v.size();
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
    int sz2 = v.size();
//    for (auto i : v)
//      cout << i << " ";
//    cout << "\n";
    if(sz1 == sz2)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int y;
    cin >> y;
    for(int i=y+1; ; i++)
    {
        if(isdistinct(i)==1)
        {
            cout << i <<endl;
            break;
        }
    }
}
