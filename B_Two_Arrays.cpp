#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, t;
        cin >> n >> t;
        ll arr[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        //sort(arr, arr+n);
        for (ll i = 0; i < n; i++)
        {
            if(arr[i]>=0 && i==n-1 && n>1)
            {
                arr[i] = -1;
            }
            for (ll j = i + 1; j < n; j++)
            {
                if (arr[i] >= 0 && arr[j] >= 0)
                {
                    //cout << arr[i] <<endl;
                    if (arr[i] + arr[j] == t)
                    {
                        //cout << "h" <<endl;
                        arr[i] = -1;
                        arr[j] = -2;
                    }
                    else
                    {
                        if(j==n-1)
                        {
                            arr[i] = -1;
                        }
                    }
                    
                }
                // else
                // {
                //     if(arr[i]<0)
                //     {
                //         arr[j] = -2;
                //     }
                //     else
                //     {
                //         arr[i] = -2;
                //     }
                    
                // }
            }
        }
        for(ll i=0; i<n; i++)
        {
            if(arr[i]==-1)
            {
                cout << 0 << " ";
            }
            else if(arr[i]==-2)
            {
                cout << 1 << " ";
            }
            //  else {
            //      cout << 0<<" ";
            //  }
        }
        cout << endl;
    }
}