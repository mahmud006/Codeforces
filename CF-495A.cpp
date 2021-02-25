#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int res = 1;
    cin >> str;
    int arr[10];
    arr[0] = 2;
    arr[1] = 7;
    arr[2] = 2;
    arr[3] = 3;
    arr[4] = 3;
    arr[5] = 4;
    arr[6] = 2;
    arr[7] = 5;
    arr[8] = 1;
    arr[9] = 2;

    for(int i=0; i<str.size(); i++)
    {
        res = res * arr[str[i]-'0'];
    }
    cout << res <<endl;
}
