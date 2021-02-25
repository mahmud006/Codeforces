#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        //ll arr[n], brr[n];
        string s1, s2;
        cin >> s1 >> s2;
        ll mx1 = 0, mx2 = 0,id1,id2;
        //sort(s1.begin(), s1.end());
        //sort(s2.begin(), s2.end());
        //cout << s1 <<endl;
        //cout << s2 <<endl;
        ll c1=0,c2=0;
        for(ll i=0; i<n; i++)
        {
            if(s1[i]>s2[i])
            {
                c1++;
            }
            else if(s2[i]>s1[i])
            {
                c2++;
            }
        }
        if(c1>c2)
        {
            cout << "RED" <<endl;
        }
        else if(c1<c2)
        {
            cout << "BLUE" <<endl;
        }
        else
        {
            cout << "EQUAL" <<endl;
        }
    }
    //     for (ll i = 0; i < s1.size(); i++)
    //     {
    //         if ((int)s1[i] > mx1)
    //         {
    //             mx1 = (int)s1[i];
    //             id1 = i;
    //         }
    //     }
    //     for (ll i = 0; i < s2.size(); i++)
    //     {
    //         if ((int)s2[i] > mx2)
    //         {
    //             mx2 = (int)s2[i];
    //             id2 = i;
    //         }
    //     }
    //     //cout << mx1 <<endl;
    //     //cout << mx2 <<endl;
    //     ll m1,m2;
    //     if(mx1>mx2)
    //     {
    //         m2 = id1;
    //         if(mx1>m2)
    //         {
    //         cout << "RED" <<endl;
    //         }
    //         else if(m2>mx1)
    //         {
    //             cout << "BLUE" <<endl;
    //         }
    //         else
    //         {
    //             cout << "EQUAl" <<endl;
    //         }
            
    //     }
    //     else if(mx2>mx1)
    //     {
    //         m1 = id2;
    //         if(mx2>m1)
    //         {
    //         cout << "BLUE" <<endl;
    //         }
    //         else if(m1>mx2)
    //         {
    //             cout << "RED" <<endl;
    //         }
    //         else
    //         {
    //             cout << "EQUAl" <<endl;
    //         }
    //     }
    //     else
    //     {
    //         cout << "EQUAL" <<endl;
    //     }
        
    // }
}