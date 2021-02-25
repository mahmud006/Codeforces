#include <bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  cin >> s;
  string s1="1111111", s2="0000000";
  int st = s.find(s1);
  int st1 = s.find(s2);
  if(st!=string::npos || st1!=string::npos)
  {
      cout << "YES" <<endl;
  }
  else
  {
      cout << "NO" <<endl;
  }
}
