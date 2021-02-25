#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool odd(ll n)
{
    if(n%2 != 0)
    {
        return true;
    }
    return false;
}
bool palindrome(ll n)
{
    string num; 
    int cnt = 0; 
    int binaryNum[32]; 
    int i = 0; 
    while (n > 0) {  
        binaryNum[i] = n % 2; 
        n = n / 2; 
        i++; 
    } 
    for (int j = i - 1; j >= 0; j--) 
        num += binaryNum[j] + '0'; 
        
    int l = 0; 
    int h = num.size() - 1; 
    bool flg = true;
    while (h > l) 
    { 
        if (num[l++] != num[h--]) 
        { 
            flg=false;
        } 
    } 
    if(flg==true)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}
int main()
{
    ll n;
    cin >> n;
    if(odd(n) && palindrome(n))
    {
        cout << "YES" <<endl;
    }
    else
    {
        cout << "NO" <<endl;
    }
    
}