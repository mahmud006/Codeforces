#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,c=0,c1=0,count=0;
   cin >> n;
   string str;
   cin >> str;
   for(int i=0; i<n; i+=2)
   {
       if(str[i]=='a' && str[i+1]=='b' || str[i]=='b' && str[i+1]=='a')
       {
           continue;
       }
       else if(str[i]=='a' && str[i+1]=='a')
       {
           str[i+1]='b';
       }
       else if(str[i]=='b' && str[i+1]=='b')
       {
           str[i+1]='a';
       }
       count++;
   }
   cout << count <<endl;
   cout << str <<endl;
}
