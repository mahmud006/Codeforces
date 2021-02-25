//#include<bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//    int n,m,sum=0;
//    cin >> n>>m;
//    int arr[n], brr[n];
//    vector<int> v;
//    for(int i=0; i<n; i++)
//    {
//        cin >> arr[i];
//        if(arr[i]<0)
//        {
//            v.push_back(arr[i]);
//        }
//    }
//    sort(v.begin(), v.end());
//    for(int i=0; i<v.size(); i++)
//    {
//        if(i+1 > m)
//        {
//            break;
//        }
//        sum += abs(v[i]);
//    }
//    cout << sum <<endl;
//}
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int tv,carry,sum=0;
    cin>>tv>>carry;
    vector<int> price;
    for(int i=0; i<tv; i++)
    {
        int x;
        cin>>x;
        price.push_back(x);
    }

    int j=0;
    for(int i=0;i<tv;i++)
    {

        int mn = *min_element(price.begin(),price.end());
        cout << mn <<endl;
        if(mn<0)
        {
            sum+=mn;
            //price.erase(price.begin()+i);
            price.erase(remove(price.begin(),price.end(),mn),price.end());
            j++;
            if(j==carry)
                break;
        }


    }

    cout<<sum*-1;
}
