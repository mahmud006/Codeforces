#include <bits/stdc++.h>
using namespace std;
#define ll long long int
// vector<ll> divisors[10000000];
// void divcal(ll n)
// {
//     for (ll i = 1; i <= n; i++)
//     {
//         for (ll j = i; j <= n; j += i)
//         {
//             divisors[j].push_back(i);
//         }
//     }
// }
ll arr[10000000], j = 0;
void div(ll n)
{
    for (ll i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (n / i == i)
            {
                arr[j] = i;
                j++;
            }
            else
            {
                arr[j] = i;
                j++;
                arr[j] = n / i;
                j++;
            }
        }
    }
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll p, q;
        cin >> p >> q;
        if (p % q != 0)
        {
            cout << p << endl;
        }
        else
        {
            // divcal(p);
            // ll mx = 0;
            // for (auto it : divisors[p])
            // {
            //     if (it % q != 0)
            //     {
            //         if (it > mx)
            //         {
            //             mx = it;
            //         }
            //     }
            // }
            // cout << mx << endl;
            div(p);
            ll mx = 0;
            cout << "j: " << j << endl;
            for (ll i = 0; i < j; i++)
            {
                cout << arr[i] << endl;
            }

            // for(ll i=0; i<=j; i++)
            // {
            //     if(arr[i]%q != 0)
            //     {
            //         if(arr[i]>mx)

            //         {
            //             mx = arr[i];
            //         }
            //     }
            // }
            // cout << mx <<endl;
            // j = 0;
            cout << p << endl;
            cout << q << endl;
        }
    }
}