#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> v[n];
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            ll a;
            cin >> a;
            v[i].push_back(a);
        }
    }
    set<ll> st;
    for (ll i = 0; i < n; i++)
    {
        ll mn = *min_element(v[i].begin(), v[i].end());
        st.insert(mn);
    }
    auto it = st.end();
    it--;
    cout << *it << endl;
}