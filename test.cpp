#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    // ll n;
    // cin >> n;
    // set<int> st;
    // set<int>::iterator it1, it2;
    // for (ll i = 0; i < n; i++)
    // {
    //     ll x;
    //     cin >> x;
    //     st.insert(x);
    // }
    // for (it1 = st.begin(); it1 != st.end(); it1++)
    // {
    //     for (it2 = it1; it2 != st.end(); it2++)
    //     {
    //         cout << *it1 << " " << *it2 << endl;
    //     }
    // }
    // ll a, b;
    // cin >> a >> b;
    // cout << a + b << endl;

    //O(n^2) solution
    //int array[] = {-1, 2, 4, -3, 5, 2, -5, 2};
    // int best = 0;
    //int n = 8;
    // for (int a = 0; a < n; a++)
    // {
    //     int sum = 0;
    //     for (int b = a; b < n; b++)
    //     {
    //         cout << array[b] << " ";
    //         sum += array[b];
    //         best = max(best, sum);
    //         cout << "b" << best << " ";
    //     }
    //     cout << endl;
    // }
    // cout << best << "\n";

    //O(n) solution - kadane's algo
    // int best = 0, sum = 0;
    // for (int k = 0; k < n; k++)
    // {
    //     sum = max(array[k], sum + array[k]);
    //     best = max(best, sum);
    //     cout << sum << " " << best << endl;
    // }
    // cout << best << "\n";
    int a[] = {10, 20, 30, 40, 50};
    int *b = a + 4;
    cout << b[0] << endl;
    cout << b[-1] << endl;
    cout << b[-2] << endl;
    cout << b[-3] << endl;
    cout << b[-4] << endl;
}