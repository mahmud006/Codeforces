#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    set<ll> st;
    st.insert(x1);
    st.insert(y1);
    st.insert(x2);
    st.insert(y2);
    if (st.size() == 2)
    {
        }
    else
    {
        cout << -1 << endl;
    }
}
