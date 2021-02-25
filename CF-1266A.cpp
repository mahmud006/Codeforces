#include<iostream>
using namespace std;
int flag;
int stringPermutation(string str, int left, int right)
{
    if(left == right)
    {
        int k = stoi(str);
        if(k==0)
        {
            flag++;
        }
        else if(k%60==0)
        {
            flag++;
        }
    }
    else
    {
        for(int i = left; i<= right; i++)
        {
            swap(str[left], str[i]);
            stringPermutation(str, left + 1, right);
            swap(str[left], str[i]); //swap back for backtracking
        }
    }
}

int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        flag = 0;
        string str;
        cin >> str;

        stringPermutation(str, 0, str.size()-1);
        if(flag>0)
        {
            cout << "red" <<endl;
        }
        else
        {
            cout << "cyan" <<endl;
        }
    }
}
