#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll n, s, sum=0, flag=0, k=0;
        cin >> n>>s;
        ll arr[n], a[n];
        for(ll i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        for(ll i=0; i<n; i++)
        {
            sum += arr[i];
            if(sum>=s)
            {
                sum-=arr[i];
                flag++;
                if(flag>1)
                {
                    break;
                }
            }
            a[k] = arr[i];
            k++;
        }
        ll* i1;
        i1 = std::max_element(a, a + k);
        ll j = 0, elem = *i1;
        while (j < n)
        {
            if (arr[j] == elem)
            {
                break;
            }
            j++;
        }

        if (j < n)
        {
            cout << j <<endl;
        }

    }
}
