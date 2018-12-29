//CPP PROGRAM TO THE GOOGLE CASE PROBLEM.

#include <bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  
  cin>>s;
  int n=s.length();
  s[0]=tolower(s[0]);
  
  for (i=1;i<n;i++)
  {
      if (s[i]==" " && i<n)
      {
          s[i+1]=tolower(s[i+1]);
          i++;
      }
      else
      {
          s[i]=toupper(s[i]);
      }
   }
   cout<<s;
   return 0;
 }
