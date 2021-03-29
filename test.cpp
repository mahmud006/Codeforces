#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin >> n;
    set<int> st;
    set<int>::iterator it1, it2;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        st.insert(x);
    }
    for (it1 = st.begin(); it1 != st.end(); it1++)
    {
        for (it2 = it1; it2 != st.end(); it2++)
        {
            cout << *it1 << " " << *it2 << endl;
        }
    }
}