#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n, k;
    cin >> n >> k;
    ll arr[k];
    for (ll i = 0; i < k; i++)
    {
        cin >> arr[i];
    }
    ll c1, c2, j = 1, r = 0, mx = 0;
    for (ll i = 0; i < k; i++)
    {
        c1 = n / arr[i];
        //cout << c1 << endl;
        c2 = c1 * arr[i];
        if (c2 > mx)
        {
            mx = c2;
            j = i + 1;
            r = c1;
        }
    }
    cout << j << " " << r << endl;
}

// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long

// int main()
// {
//     ll n, k, i, p, q, x = -1, y = 2000000000000000000LL, z = -1;

//     cin >> n >> k;
//     for (i = 1; i <= k; i++)
//     {
//         cin >> p;
//         if (n % p < y)
//             y = n % p, x = i, z = p;
//     }

//     printf("%lld %lld\n", x, n / z);
//     return 0;
// }