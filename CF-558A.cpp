#include<bits/stdc++.h>
using namespace std;
struct info
{
    int x, a;
};
bool cmp(info i1, info i2)
{
    return (i1.x < i2.x);
}
int main()
{
    int n, cnt=0, c=0, sum=0;
    cin >> n;
    info arr[n];
    vector <info> vec1;
    vector <info> vec2;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i].x;
        cin >> arr[i].a;
        if(arr[i].x > 0)
        {
            cnt++;
            vec1.push_back({arr[i].x, arr[i].a});
        }
        else if(arr[i].x < 0)
        {
            c++;
            vec2.push_back({arr[i].x, arr[i].a});
        }
    }
    int m = min(c, cnt);
    int mx = max(c, cnt);
    sort(vec1.begin(), vec1.end(), cmp);
    sort(vec2.rbegin(), vec2.rend(), cmp);

    if(c==cnt)
    {
        for(int i=0; i<n; i++)
        {
            sum += arr[i].a;
        }
    }
    else
    {
        for(int i=0; i<m+1; i++)
        {
            if(i==m && mx==cnt)
            {
                sum += vec1[i].a;
                break;
            }
            if(i==m && mx==c)
            {
                sum += vec2[i].a;
                break;
            }
            sum += vec1[i].a;
            sum += vec2[i].a;
        }
    }
    cout << sum <<endl;
}
