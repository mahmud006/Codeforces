#include<bits/stdc++.h>
using namespace std;
deque<int> deq;
deque<int>::iterator it;
bool check(int n)
{
    int c=0;
    for(int j=0; j != deq.size(); j++)
        {
            if(n == deq[j])
            {
                c++;
            }
        }
        if(c>0)
        {
            return 0;
        }
        else
        {
            return 1;
        }
}
int main()
{
    int n, k;
    cin >> n>>k;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    int a=0, b=0;
    for(int i=0; i<n; i++)
    {
        if(check(arr[i])==1)
        {
            deq.push_front(arr[i]);
            if(deq.size() > k)
            {
                deq.pop_back();
            }
        }
    }
    cout << deq.size() <<endl;
    for(it=deq.begin(); it != deq.end(); ++it)
    {
        cout << *it << " ";
    }
}
