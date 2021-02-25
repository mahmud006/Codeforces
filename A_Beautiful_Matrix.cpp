#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll arr[5][5];
    ll x,y;
    for(ll i=0; i<5; i++)
    {
        for(ll j=0; j<5; j++)
        {
            cin >> arr[i][j];
            if(arr[i][j]==1)
            {
                x = i;
                y = j;
            }
        }
    }
    cout << abs(x-2)+abs(y-2) <<endl;
}