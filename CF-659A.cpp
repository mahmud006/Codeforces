#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, a,b,check,res;
    cin >> n>>a>>b;
    if(b>=0)
    {
        check = abs(a+b);
        if(check%n==0)
        {
            cout << n <<endl;
        }
        else
        {
            cout << check%n <<endl;
        }
    }
    else
    {
        check = abs(a+b);
        if(check<n)
        {
            if(a+b>0)
            cout << check<<endl;
            else
            {
                res = check%n;
            cout << n-res <<endl;
            }
        }
        else
        {
            res = check%n;
            cout << n-res <<endl;
        }
    }
}

//#include<bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//    int i, j, x, y, n;
//
//    cin >> n >> x >> y;
//
//    int ans = (x + y) % n;
//
//    if(ans <= 0) ans += n;
//
//    cout << ans;
//
//
//    return 0;
//}
