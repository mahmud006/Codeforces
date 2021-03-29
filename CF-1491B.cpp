// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// int main()
// {
//     ll t;
//     cin >> t;
//     while (t--)
//     {
//         ll n, u, v;
//         cin >> n >> u >> v;
//         ll arr[n];
//         set<ll> st;
//         ll ch, flg = 0;
//         for (ll i = 0; i < n; i++)
//         {
//             cin >> arr[i];
//             if (abs(ch - arr[i]) > 1 && i != 0)
//             {
//                 flg++;
//             }
//             st.insert(arr[i]);
//             ch = arr[i];
//         }
//         ll mn = INT_MAX, chk;
//         for (ll i = 0; i < n; i++)
//         {
//             if ((arr[i - 1] == arr[i] && arr[i + 1] == arr[i]) || (i == 0 && arr[i + 1] == arr[i]) || (i == n - 1 && arr[i - 1] == arr[i]))
//             {
//                 if (st.size() == 1)
//                 {
//                     chk = min(v + v, v + u);
//                 }
//                 else
//                 {
//                     chk = min(v + v, min(v + u, u + u));
//                 }

//                 if (chk < mn)
//                 {
//                     mn = chk;
//                 }
//             }
//             else if ((arr[i - 1] != arr[i] && arr[i + 1] == arr[i]) || (i == n - 1 && arr[i - 1] != arr[i]))
//             {
//                 if (arr[i - 1] != arr[i] + 1)
//                 {
//                     chk = min(min(u, v), min(v + v, u + v));
//                 }
//                 else
//                 {
//                     chk = min(u, min(v + v, u + v));
//                 }

//                 if (chk < mn)
//                 {
//                     mn = chk;
//                 }
//             }
//             else if ((arr[i - 1] == arr[i] && arr[i + 1] != arr[i]) || (i == 0 && arr[i + 1] != arr[i]))
//             {
//                 if (arr[i + 1] != arr[i] + 1)
//                 {
//                     chk = min(min(u, v), min(v + v, u + v));
//                 }
//                 else
//                 {
//                     chk = min(u, min(v + v, u + v));
//                 }

//                 if (chk < mn)
//                 {
//                     mn = chk;
//                 }
//             }
//             else if (arr[i - 1] != arr[i] && arr[i + 1] != arr[i])
//             {
//                 chk = min(u, v);
//                 if (chk < mn)
//                 {
//                     mn = chk;
//                 }
//             }
//         }
//         if (flg > 0)
//         {
//             cout << 0 << endl;
//         }
//         else
//         {

//             cout << mn << endl;
//         }
//     }
// }




#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n,u,v;
        cin >> n>>u>>v;
        vector<ll>arr(n);
        for(ll i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        bool ok = false;
        for(ll i=0; i<n-1; i++)
        {
            if(abs(arr[i]-arr[i+1])>1)
            {
                ok = true;
                break;
            }
        }
        if(ok)
        {
            cout << 0 <<endl;
            continue;
        }

        for(ll i=0; i<n-1; i++)
        {
            if(abs(arr[i]-arr[i+1])==1)
            {
                ok = true;
                break;
            }
        }
        if(ok)
        {
            cout << min(u,v) <<endl;
            continue;
        }
        cout << v + min(u,v) <<endl;
    }
}